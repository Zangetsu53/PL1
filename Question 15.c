#include <stdio.h>
#include <math.h>
int main()
{
	int A, B, C, D, N, Sum, P;
	printf("Please enter a number: ");
	scanf("%d", &N);
	A=N;
	B=N;
	D=0;
	Sum=0;
	while(N>0){
		N=N/10;
		D++ ;
	}
	while (A>0){
		P= pow(10,D-1);
		C=A % 10;
		Sum=Sum+(C*P);
		D=D-1;
		A=A/10;
	}	
	if(Sum==B)
		printf("Your number is palindrom.");
	else
		printf("Your number is not palindrom.");
	
	return 0;
}
