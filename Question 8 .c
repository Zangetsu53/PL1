#include <stdio.h>
int main()
{
	int low, high, sum;
	printf("Please enter the starting point as a integer: ");
	scanf("%d", &low);
	printf("Please enter the finishing point as a integer: ");
	scanf("%d", &high);
	while (low <= high){
		sum= sum + low ;
		low++ ;
	 }
	printf("%d", sum);
	return 0;
}
