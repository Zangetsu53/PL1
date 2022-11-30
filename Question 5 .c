#include <stdio.h>
int main()
{
	double fah, cant, fl;
	printf("Please enter your Fahrenheit temperature: ");
	scanf("%lf", &fah);
	fl= (float) 5/9 ;
	cant= (fah-32)*fl ;
	printf("Fahrenheit temperature as Celsius: %lf", cant);
	
	
	
	return 0;
}
