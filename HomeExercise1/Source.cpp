#include <stdio.h>

//Skriv et program som kan omregne et bel�b i Euro til det tilsvarende bel�b i Danske
//kroner.
//I programmet skal man kunne indtaste et bel�b i Euro.Programmet skal beregne
//bel�bet i Danske kroner og udskrive dette p� sk�rmen.
//NB!Overvej hvilken type de variable, som skal indeholde pengebel�b skal have
//(dette er vigtigt for forst�elsen af typer).

//pseudokode lave et program der indl�ser euro og omregner det til dkk

int main (void)

{
	double eurdkk;
		eurdkk = 7.45;
	double euro;
	double dkk;
												//initialiserer vores valutaer

	printf_s("Enter ammount in euro:\n");
		scanf_s("%lf", &euro);

		dkk = euro * eurdkk;
		printf_s("Ammount in DKK is: %lf", dkk);

	return 0;
}