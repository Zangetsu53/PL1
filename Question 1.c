#include <stdio.h>
int main()
{
	int LS, SS, Area, Peri;
	printf("please enter the long side of rectangle: ");
	scanf("%d", &LS);
	printf("please enter the short side of rectangle: ");
	scanf("%d", &SS);
	Area = LS*SS;
	Peri = 2*LS+2*SS;
	printf("Area: %d \nPerimeter: %d", Area,Peri);
	
	
	
	return 0;
}
