#include <stdio.h>
int main()
{
	int N, D=1;
	printf("Please enter a number: ");
	scanf("%d",&N);
	while (N/10>0){
		N=N/10;
		D++ ;
	}
	printf("%d", D);
	
	
	return 0;
}
