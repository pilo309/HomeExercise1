#include <stdio.h>

//Home exercise 1.4
//Skriv et program som kan bestemme om en person er barn, teenager eller voksen
//ud fra personens alder.
//I programmet skal man kunne indtaste en alder.Hvis alderen er min - dre end 13 skal
//programmet udskrive �This person is a child�.Hvis alderen er 13 til 19 (13 <= age
//	&& age <= 19) skal programmet ud - skrive �This person is a teenager�.Hvis alderen
//	er st�rre end 19 skal programmet udskrive �This person is an adult�.
//	Skriv programmet i pseudokode f�r du skriver C kode.
//	Pr�v eventuelt om du kan udvide programmet, s� det udskriver specielle beskeder
//	p� sk�rmen, hvis der indtastes en negativ alder eller hvis der indtastes en alder
//	st�rre end 125.

//pseudokode program der bestemmer om person er barn (alder < 13) teenager (13 < alder < 19) 
//eller voksen (alder > 19)

int main(void)

{

	int age;

	printf_s("Enter your age:\n");
	scanf_s("%d", &age);

	if       (0 <= age && age <= 13)
		printf_s("You are a child\n");

	else if (13 <= age && age <= 19)
		printf_s("You are a teenager\n");

	else if (19 <= age && age <= 130)
		printf_s("You are an andult...\n");

	else if (age >= 130)
		printf_s("Damm what have you been eating");

	else
	printf_s("That does not make any sense.\n");



	return 0;
}