#include <stdio.h>

//Home exercise 1.2
//Skriv et program som kan beregne middelv�rdien(gennemsnittet) af 3 hele tal.
//I programmet skal man kunne indtaste 3 hele tal.Programmet skal s� beregne
//middelv�rdien af disse tal og udskrive denne p� sk�rmen.
//NB!Overvej hvilken type den variabel, som skal indeholde middel - v�rdien skal
//have(dette er vigtigt for forst�elsen af typer).
//Lav en �plan�(pseudokode) f�r du begynder at skrive C kode.
//NB!Hvis du ikke kan f� programmet til at regne rigtigt, s� skal du v�re opm�rksom
//p� f�lgende(husk det � for det er meget vigtigt) :
//	Hvis du dividerer to hele tal(integers) med hinanden, s� bliver resul - tatet ogs� et
//	helt tal(decimaler �smides v�k�).Men hvis blot et af tallene(t�ller eller n�vner) er
//	et decimaltal s� bliver resultatet ogs� et decimaltal.
//	Du m� ikke l�se dette problem ved at �ndre typerne p� de 3 tal som indl�ses
//	(disse skal v�re af typen int).Overvej hvordan du s� kan l�se problemet?

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