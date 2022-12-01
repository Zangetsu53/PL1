#include <stdio.h>
int main()
{
	int num, sum=0, ct=0;
	printf("Please enter a number: ");
	scanf("%d", &num);
	sum = sum + num ;
	while (ct<9){
		printf("Please enter a number:");
		scanf("%d", &num);
		sum = sum + num ;
		ct++ ;
	}
	printf("Summation is: %d", sum);
	return 0;
}
