#include <stdio.h>

int main() {
    int studentAge;
    printf("Enter student age:\n ");
    scanf("%d", &studentAge);

    switch (studentAge) {
        case 3:
        case 4:
            printf("Nursery\n");
            break;

        case 5:
        case 6:
        printf("Kinder\n");
        break;

        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        printf("Elementary\n");
        break;
        
        case 13:
        case 14:
        case 15:
        case 16:
        printf("Junior High School\n");
        break;

        case 17:
        case 18:
        printf("Senior High School\n");
        break;

        case 19:
        case 20:
        case 21:
        case 22:    
        printf("College");
        break;

        default:
        printf("INVALID AGE\n");
        break;

    }
    return 0;
}