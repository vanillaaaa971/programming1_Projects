#include <stdio.h>
#include <string.h>

int main(){
	//Declaration and initialization of variables
	int firstNumber = 0, secondNumber = 0, operationToBeUsed = 0, answerToOperation = 0;
	char operationAnswer[20] = "";

	printf("Input 1st number: ");
	scanf("%d", &firstNumber);
	
	printf("Input 2nd number: ");
	scanf("%d", &secondNumber);
	
	printf("\n[1] Add");
	printf("\n[2] Subtract");
	printf("\n[3] Multiply");
	printf("\n[4] Divide");
	printf("\n[0] Exit");
	printf("\nChoose operation: ");
	scanf("%d", &operationToBeUsed);
	
	switch(operationToBeUsed){
		case 1:
			answerToOperation = firstNumber + secondNumber;
			strcpy(operationAnswer, "sum");
			break;
		case 2:
			answerToOperation = firstNumber - secondNumber;
			strcpy(operationAnswer, "difference");
			break;
		case 3:
			answerToOperation = firstNumber * secondNumber;
			strcpy(operationAnswer, "product");
			break;
		case 4:
			if (secondNumber != 0) {
				answerToOperation = firstNumber / secondNumber;
				strcpy(operationAnswer, "quotient");
			} else {
				printf("Error: Division by zero is not allowed.\n");
				return 0;
			}
			break;
		case 0:
			printf("Exiting program...\n");
			return 0;
		default:
			printf("Invalid option!\n");
			return 0;
	}
	
	printf("The %s of %d and %d is %d.\n", operationAnswer, firstNumber, secondNumber, answerToOperation); 
	
	return 0;
}