#include <stdio.h>

int main() {
    int votersAge;
    printf("Enter your age:");
    scanf("%d", &votersAge);

if (votersAge >= 18)
    printf("Eligible to vote\n");
else
    printf("Not eligible to vote\n");

return 0;

}