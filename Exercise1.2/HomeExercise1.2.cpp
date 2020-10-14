#include <stdio.h>

//Home exercise 1.2
//Skriv et program som kan beregne middelværdien(gennemsnittet) af 3 hele tal.
//I programmet skal man kunne indtaste 3 hele tal.Programmet skal så beregne
//middelværdien af disse tal og udskrive denne på skærmen.
//NB!Overvej hvilken type den variabel, som skal indeholde middel - værdien skal
//have(dette er vigtigt for forståelsen af typer).
//Lav en ”plan”(pseudokode) før du begynder at skrive C kode.
//NB!Hvis du ikke kan få programmet til at regne rigtigt, så skal du være opmærksom
//på følgende(husk det – for det er meget vigtigt) :
//	Hvis du dividerer to hele tal(integers) med hinanden, så bliver resul - tatet også et
//	helt tal(decimaler ”smides væk”).Men hvis blot et af tallene(tæller eller nævner) er
//	et decimaltal så bliver resultatet også et decimaltal.
//	Du må ikke løse dette problem ved at ændre typerne på de 3 tal som indlæses
//	(disse skal være af typen int).Overvej hvordan du så kan løse problemet?

//pseudokode lave program der kan beregne gennemsnit af 3 HELE tal (int), 

int main(void)
{

	int tal1, tal2, tal3;

	float gns;

	printf_s("Enter number 1:\n");
		scanf_s("%d", &tal1);

	printf_s("Enter number 2:\n");
		scanf_s("%d", &tal2);

	printf_s("Enter number 3:\n");
		scanf_s("%d", &tal3);

		gns = (tal1 + tal2 + tal3) / 3;

		printf_s("Average is: %f", gns);


	return 0;
}