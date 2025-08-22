#include <stdio.h>

int main() {
    int studentAge;
    printf("Enter student age: ");
    scanf("%d", &studentAge);

    if (studentAge >= 3 && studentAge <= 4)
        printf("Nursery\n");
    else if (studentAge >= 5 && studentAge <= 6)
        printf("Kinder\n");
    else if (studentAge >= 7 && studentAge <= 12)
        printf("Elementary\n");
    else if (studentAge >= 13 && studentAge <= 16)
        printf("Junior High School\n");
    else if (studentAge >= 17 && studentAge <= 18)
        printf("Senior High School\n");
    else if (studentAge >= 19 && studentAge <= 22)
        printf("College\n");                        
    else
    
        printf("Age invalid\n");

    return 0;
}