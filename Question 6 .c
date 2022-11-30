#include <stdio.h>
int main()
{
	double feet, cm;
	printf("Please enter a lenght as a feet value: ");
	scanf("%lf", &feet);
	cm = feet * 30.48 ;
	printf("Your feet value as a centimeter: %lf", cm);
	
	return 0;
}
