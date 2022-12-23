#include <stdio.h>
#include <math.h>
int main()
{
	double x, P, n, a=2, i, j, sum=1, temp=1, cont=-1;
	printf("please enter the x value: ");
	scanf("%lf", &x);
	printf("Please enter the n value: ");
	scanf("%lf", &n);
	for (i=1; i<=n; i++){
		temp=1;
		for (j=1; j<=a; j++){
			temp=temp*j;
		}
		P= pow(x,i);
		if(cont<0)
			sum=sum-(P/temp);
		else
			sum=sum+(P/temp);
		cont=cont*-1;
		a=a+2;
	}
	printf("Sum of the serie is: %.2lf", sum);
	
	return 0;
}
