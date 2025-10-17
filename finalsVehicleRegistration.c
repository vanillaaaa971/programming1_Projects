#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char ownerName[50];
    char vehicleType[50];
    char vehicleColor[50];
    char licensePlate[15];
    int registrationYear;
 }  Vehicle;

#define MAX_VEHICLES 100
Vehicle vehicles[MAX_VEHICLES];
int vehicleCount = 0;

    void addVehicle(void);
    void viewAllVehicles(void);
    void searchVehicleByLicenssePlate(void);
    void updateVehicleInfo(void);
    void deleteVehicleRegistration(void);

int main() {
int choice;

do {

    printf("\nVehicle Registration System\n");
    printf("[1] Register a new vehicle\n");
    printf("[2] View all registered vehicles\n");    
    printf("[3] Search vehicle by license plate\n");
    printf("[4] Update Vehicle Information\n");
    printf("[5] Delete Vehicle Registration\n");
    printf("[0] Exit\n");
    scanf("%d", &choice);
    getchar();

    switch(choice) {

        case 1: addVehicle();
        break;

        case 2: viewAllVehicles();
        break;

        case 3: searchVehicleByLicenssePlate();
        break;

        case 4: updateVehicleInfo();
        break;

        case 5: deleteVehicleRegistration();
        break;
        
        case 0: printf("Exiting the program.\n");
        break;  

        default: printf("Invalid choice. Please try again.\n"); 

    }

} while(choice != 0);
        
        return 0;
}

void addVehicle(void) {
    if(vehicleCount >= MAX_VEHICLES) {
        printf("Vehicle registration is full.\n");
        return;
    }
    Vehicle V;
    printf("Enter owner's name: ");
    fgets(V.ownerName, sizeof(V.ownerName), stdin);

    printf("Enter plate number: ");
    fgets(V.licensePlate, sizeof(V.licensePlate), stdin);

    printf("Enter vehicle type: ");
    fgets(V.vehicleType, sizeof(V.vehicleType), stdin);

    printf("Enter vehicle color: ");
    fgets(V.vehicleColor, sizeof(V.vehicleColor), stdin);   

    printf("Enter registration year: ");
    scanf("%d", &V.registrationYear);   
    getchar();

    vehicles[vehicleCount] = V;
    vehicleCount++;

    printf("Vehicle registered successfully.\n");
}

void searchVehicleByLicenssePlate(void) {
    char licensePlate[15];
    printf("Enter license plate to search: ");
    fgets(licensePlate, sizeof(licensePlate), stdin);

    for(int i = 0; i < vehicleCount; i++) {
        if(strcmp(vehicles[i].licensePlate, licensePlate) == 0) {
            printf("Vehicle found:\n");
            printf("Owner's Name: %s", vehicles[i].ownerName);
            printf("Vehicle Type: %s", vehicles[i].vehicleType);
            printf("Vehicle Color: %s", vehicles[i].vehicleColor);
            printf("License Plate: %s", vehicles[i].licensePlate);
            printf("Registration Year: %d\n", vehicles[i].registrationYear);
            return;
        }
    }
    printf("Vehicle with license plate %s not found.\n", licensePlate);
}





