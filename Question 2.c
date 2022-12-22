#include <stdio.h>
#include <math.h>
int main()
{
	double d=1,f=2,g, X1, X2, a, b, c, delta, p;

	printf("Please enter a: ");
	scanf("%lf", &a);
	printf("Please enter b: ");
	scanf("%lf", &b);
	printf("Please enter c: ");
	scanf("%lf", &c);
	delta=(b*b)-(4*a*c);
	g=d/f;
	p= pow(delta,g);
	if (delta>0){
		printf("There is 2 real root.\n");
		X1=(-b+p)/2*a;
		X2=(-b-p)/2*a;
		printf("The first one: %lf\nThe second one: %lf", X1,X2);
	}
	else if (delta==0){
		X1=(-b)/(2*a) ;
		printf("There is only one real number: %lf", X1);
	}
	else
		printf("There is no real number");	
		
	
	
	return 0;
}
