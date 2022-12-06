#include <stdio.h>
int main()
{
	int N,NF=1;
	printf("Please enter a number: ");
	scanf("%d", &N);
	while(N<0){
		printf("Please don't enter negative numbers.\n");
		printf("Please enter a number: ");
		scanf("%d", &N);
	}
	if(N==0)
		NF=1;
	while (N>0){
		NF=NF*N ;
		N-- ;
	}
	printf("Your number factoriel is: %d", NF);
	
	
	
	return 0;
}
