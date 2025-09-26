#include <stdio.h>
#include <string.h>

int main () {
    char choices; 
    int i = 0;

    char lastName[100][50];
    char firstName[100][50];
    char middleName[100][50];
    char studentNumber[100][50];
    int course[100];
    int year[100];
    int section[100];



do {
        printf("\nFill-in the following student record\n");

        printf("Last Name: ");
        fgets(lastName[i], 50, stdin);
        lastName[i][strcspn(lastName[i], "\n")] = '\0';

        printf("First Name: ");
        fgets(firstName[i], 50, stdin);
        firstName[i][strcspn(firstName[i], "\n")] = '\0';

        printf("Middle Name: ");
        fgets(middleName[i], 50, stdin);
        middleName[i][strcspn(middleName[i], "\n")] = '\0';

        printf("Student Number: ");
        fgets(studentNumber[i], 50, stdin);
        studentNumber[i][strcspn(studentNumber[i], "\n")] = '\0';

        printf("COURSE: [1] BSCS, [2] BSIS, [3] BSIT, [4] BSEMC: ");
        scanf("%d", &course[i]);

        printf("Year: [1] 1st, [2] 2nd, [3] 3rd, [4] 4th: ");
        scanf("%d", &year[i]);

        printf("Section: [1] A, [2] B, [3] C: ");
        scanf("%d", &section[i]);

        getchar();  

        i++;

        printf("\nDo you want to add another student record? [Y/N]: ");
        scanf(" %c", &choices);   
        getchar();  

    } while (choices == 'Y' || choices == 'y');
    
    printf("\nComputer Studies Department Student Records\n");
    for (int j = 0; j < i; j++) {
        printf("%d. %s, %s %s, %s, ", j + 1, lastName[j], firstName[j], middleName[j], studentNumber[j]);

        switch (course[j]) {
            case 1: printf("BSCS, "); break;
            case 2: printf("BSIS, "); break;
            case 3: printf("BSIT, "); break;
            case 4: printf("BSEMC, "); break;
            default: printf("Invalid Course, "); break;
        }

        switch (year[j]) {
            case 1: printf("1st Year, "); break;
            case 2: printf("2nd Year, "); break;
            case 3: printf("3rd Year, "); break;
            case 4: printf("4th Year, "); break;
            default: printf("Invalid Year, "); break;
        }

        switch (section[j]) {
            case 1: printf("Section A\n"); break;
            case 2: printf("Section B\n"); break;
            case 3: printf("Section C\n"); break;
            default: printf("Invalid Section\n"); break;
        }
    }

    printf("\nThank you.\n");
    return 0;
}

   