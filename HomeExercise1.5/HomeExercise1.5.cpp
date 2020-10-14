#include <stdio.h>

//2.20 (Converting from seconds to hours, minutes and seconds) Write a program that asks the
//user to enter the total time elapsed, in seconds, since an eventand converts the time to hours,
//minutesand seconds.The time should be displayed as hours : minutes : seconds.[Hint:Use the
//remainder operator]

//pseudokode: lav program der konverterer sekunder til timer/minutter/sekunder

int main(void)
{
	int time, seconds, minutes, hours, totalminutes;

	printf_s("Enter total time in seconds\n");
	scanf_s("%d", &time);

	seconds = time % 60;

	totalminutes = (time - seconds) / 60;

	minutes = totalminutes % 60;

	hours = (totalminutes - minutes) / 60;

	printf_s("The entered time in seconds is equal to %d : %d : %d", hours, minutes, seconds);



	return 0;
}