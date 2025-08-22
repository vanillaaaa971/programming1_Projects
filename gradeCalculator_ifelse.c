#include <stdio.h>

int main () {
int studentGrade;
printf("Enter the student's grade: ");
scanf("%d", &studentGrade);

if (studentGrade >= 90 && studentGrade <= 100) {
    printf("Graade: A\n");
} else if (studentGrade >= 80 && studentGrade <= 90 ) {
    printf("Grade: B");
} else if (studentGrade >= 70 && studentGrade <= 80) {
    printf("Grade: C\n");
} else if (studentGrade >= 60 && studentGrade <= 70) {
    printf("Grade: D\n");
} else if (studentGrade >= 0 && studentGrade < 60) {
    printf("Grade: F\n");
} else {
    printf("Invalid grade entered.\n");

return 0;
}
}
