#include <stdio.h>

//Skriv et program som kan omregne et beløb i Euro til det tilsvarende beløb i Danske
//kroner.
//I programmet skal man kunne indtaste et beløb i Euro.Programmet skal beregne
//beløbet i Danske kroner og udskrive dette på skærmen.
//NB!Overvej hvilken type de variable, som skal indeholde pengebeløb skal have
//(dette er vigtigt for forståelsen af typer).

//pseudokode lave et program der indlæser euro og omregner det til dkk

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