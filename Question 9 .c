#include <stdio.h>
int main()
{
	int low, high, num;
	printf("Please enter starting point: ");
	scanf("%d", &low);
	printf("Please enter finishing point: ");
	scanf("%d", &high);
	printf("Please enter a number: ");
	scanf("%d", &num);
	while(low <= high){
		if (low % num ==0)
			printf("%d \n", low);
		low++ ;		
	}
	return 0;
}
