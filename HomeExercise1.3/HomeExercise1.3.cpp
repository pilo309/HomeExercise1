#include <stdio.h>

//2.24 (Odd or Even) Write a program that reads an integer and determines and prints whether
//it’s odd or even.[Hint:Use the remainder operator. An even number is a multiple of two.
//Any multiple of two leaves a remainder of zero when divided by 2.]

int main(void)
{

	int number;                              //initialiserer vores nummer

	printf_s("Enter a number:\n");          //spørger om indtastningen af tallet
	scanf_s("%d", &number);

	if (number % 2 == 0)
		printf_s("\nThe number %d, is even\n", number);
	else
		printf_s("\nNumber %d, is not even\n", number);

	return 0;
}