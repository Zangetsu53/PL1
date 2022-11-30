#include <stdio.h>
#include <math.h>
int main()
{
	double radius, pi, area;
	pi = 3.14 ;
	printf("Please enter the radius: ");
	scanf("%lf", &radius);
	area = pi*radius*radius ;
	printf("Area of your circle: %lf", area);
	return 0;
}
