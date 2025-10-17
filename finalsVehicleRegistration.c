#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char ownerName[50];
    char vehicleType[50];
    char vehicleColor[50];
    char licensePlate[15];
    int registrationYear;
} Vehicle;

#define MAX_VEHICLES 100
Vehicle vehicles[MAX_VEHICLES];
int vehicleCount = 0;

 
void addVehicle(void);
void viewAllVehicles(void);
void searchVehicleByLicensePlate(void);
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
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch(choice) {
            case 1: addVehicle(); 
            break;

            case 2: viewAllVehicles(); 
            break;
            
            case 3: searchVehicleByLicensePlate(); 
            break;

            case 4: updateVehicleInfo(); 
            break;
            
            case 5: deleteVehicleRegistration(); 
            break;

            case 0: printf("Exiting the program.\n"); break;
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
    V.ownerName[strcspn(V.ownerName, "\n")] = '\0';

    printf("Enter license plate: ");
    fgets(V.licensePlate, sizeof(V.licensePlate), stdin);
    V.licensePlate[strcspn(V.licensePlate, "\n")] = '\0';

    printf("Enter vehicle type: ");
    fgets(V.vehicleType, sizeof(V.vehicleType), stdin);
    V.vehicleType[strcspn(V.vehicleType, "\n")] = '\0';

    printf("Enter vehicle color: ");
    fgets(V.vehicleColor, sizeof(V.vehicleColor), stdin);
    V.vehicleColor[strcspn(V.vehicleColor, "\n")] = '\0';

    printf("Enter registration year: ");
    scanf("%d", &V.registrationYear);
    getchar();

    vehicles[vehicleCount] = V;
    vehicleCount++;

    printf("Vehicle registered successfully!\n");
}

void viewAllVehicles(void) {
    if (vehicleCount == 0) {
        printf("No vehicles registered yet.\n");
        return;
    }

    printf("\nAll Registered Vehicles:\n");
    for (int i = 0; i < vehicleCount; i++) {
        printf("%d. Owner: %s | Plate: %s | Type: %s | Color: %s | Year: %d\n",
               i + 1,
               vehicles[i].ownerName,
               vehicles[i].licensePlate,
               vehicles[i].vehicleType,
               vehicles[i].vehicleColor,
               vehicles[i].registrationYear);
    }
}

void searchVehicleByLicensePlate(void) {
    char licensePlate[15];
    printf("Enter license plate to search: ");
    fgets(licensePlate, sizeof(licensePlate), stdin);
    licensePlate[strcspn(licensePlate, "\n")] = '\0';

    for (int i = 0; i < vehicleCount; i++) {
        if (strcmp(vehicles[i].licensePlate, licensePlate) == 0) {
            printf("\nVehicle found:\n");
            printf("Owner's Name: %s\n", vehicles[i].ownerName);
            printf("Vehicle Type: %s\n", vehicles[i].vehicleType);
            printf("Vehicle Color: %s\n", vehicles[i].vehicleColor);
            printf("License Plate: %s\n", vehicles[i].licensePlate);
            printf("Registration Year: %d\n", vehicles[i].registrationYear);
            return;
        }
    }
    printf("Vehicle with license plate '%s' not found.\n", licensePlate);
}

void updateVehicleInfo(void) {
    char licensePlate[15];
    printf("Enter license plate to update: ");
    fgets(licensePlate, sizeof(licensePlate), stdin);
    licensePlate[strcspn(licensePlate, "\n")] = '\0';

    for (int i = 0; i < vehicleCount; i++) {
        if (strcmp(vehicles[i].licensePlate, licensePlate) == 0) {
            printf("Enter new vehicle color: ");
            fgets(vehicles[i].vehicleColor, sizeof(vehicles[i].vehicleColor), stdin);
            vehicles[i].vehicleColor[strcspn(vehicles[i].vehicleColor, "\n")] = '\0';
            printf("Vehicle info updated successfully!\n");
            return;
        }
    }
    printf("Vehicle with license plate '%s' not found.\n", licensePlate);
}

void deleteVehicleRegistration(void) {
    char licensePlate[15];
    printf("Enter license plate to delete: ");
    fgets(licensePlate, sizeof(licensePlate), stdin);
    licensePlate[strcspn(licensePlate, "\n")] = '\0';

    for (int i = 0; i < vehicleCount; i++) {
        if (strcmp(vehicles[i].licensePlate, licensePlate) == 0) {
            for (int j = i; j < vehicleCount - 1; j++) {
                vehicles[j] = vehicles[j + 1];
            }
            