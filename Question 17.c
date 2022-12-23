#include <stdio.h>
int main()
{
	float a, n, i, sum;
	printf("Please enter the n number");
	scanf("%f", &n);
	for (i=1; i<=n; i++){
		a= 1.0/i;
		printf("1/%.f +",i);
		sum= sum + a;
	}
	printf("\nsum: %f", sum);
	
	
	return 0;
}
