#include <stdio.h>
int main()
{
	int N, A=1, L, M;
	printf("Please enter a number that you want to see the table: ");
	scanf("%d",&N);
	printf("Please enter the limit of the table: ");
	scanf("%d", &L);
	while (L>=A){
		M=A*N;
		printf("%d \n", M);
		A++;
	}
	
	return 0;
}
