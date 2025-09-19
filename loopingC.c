#include <stdio.h>

int main() {
	int numberInput = 0;

	printf("Input number: ");
	scanf("%d", &numberInput);

	// ---------- For Loop ----------
	printf("\nFor Loop (1 to n):\n");
	for (int i = 1; i <= numberInput; i++) {
		printf("%d ", i);
	}
	printf("\n");

	printf("For Loop (n to 1):\n");
	for (int i = numberInput; i >= 1; i--) {
		printf("%d ", i);
	}
	printf("\n");

	// ---------- While Loop ----------
	printf("\nWhile Loop (1 to n):\n");
	int counter = 1;
	while (counter <= numberInput) {
		printf("%d ", counter);
		counter++;
	}
	printf("\n");

	// ---------- Do...While Loop ----------
	printf("\nDo...While Loop (n to 1):\n");
	counter = numberInput;
	do {
		printf("%d ", counter);
		counter--;
	} while (counter >= 1);
	printf("\n");

	return 0;
}