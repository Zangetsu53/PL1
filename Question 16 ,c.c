#include <stdio.h>
int main()
{
	int A=1000,B=2000,Sum=2;
	while (A<=B){
		printf("%d \n", A);
		Sum+=A;
		A+=2;
	}	
	printf("Summation: %d", Sum);
	return 0;
}
