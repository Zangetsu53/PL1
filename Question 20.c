#include <stdio.h>
#include <math.h>
int main()
{
	int cont=1, n, x, i, p=1, sum=0;
	printf("Please enter the x value: ");
	scanf("%d", &x);
	printf("Please enter the limit of the series (n): ");
	scanf("%d", &n);
	for (i=1; i<=n; i++){
		if(cont>0)
			sum=sum+ pow(x,p);
		else
			sum=sum- pow(x,p);
		cont=cont*-1;
		p+=2;
	}
 printf("Sum of the series is: %d", sum);
	
	
	return 0;
}
