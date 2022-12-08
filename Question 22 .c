#include <stdio.h>
#include <math.h>
int main(){
	int D=1, A, B, C, N, LD, FD, SW, P;
	printf("Please enter a number: ");
	scanf("%d", &N);
	A=N;
	B=N;
	while(N/10>0){
		N=N/10;
		D=D+1;
	}
	LD=A%10;
	while(A/10>0){
		A=A/10;
	}
	FD=A%10;
	P= pow(10,(D-1));
	C=B-(LD*1)-(FD*P);
	SW=C+(LD*P)+(FD*1);
	printf("%d", SW);
	return 0;
}
