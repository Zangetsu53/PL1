#include <stdio.h>
#include <math.h>
int main()
{
	double i, j, n, x, fac=1, sum=0;
	printf("Please enter the x number: ");
	scanf("%lf", &x);
	printf("Please enter the limit of the series (n): ");
	scanf("%lf", &n);
	for (i=0; i<=n-1; i++){
		fac=1;
		for(j=1; j<=i; j++){
			if(i==0){
				fac=1;
				break;
			}
			fac=fac*j;
		}
		sum=sum+ pow(x,i)/fac;
		
	}
	printf("%lf", sum);
	
	return 0;
}
