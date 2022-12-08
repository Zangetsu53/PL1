#include <stdio.h>
int main(){
	int N, A, Res;
	printf("Please enter a number: ");
	scanf("%d", &N);
	A=N;
	Res=0;
	while(A!=0){
		Res=Res*10;
		Res=Res+A%10;
		A=A/10;
	}
	if (Res==N)
		printf("Your number is palindromic.");
	else
		printf("Your number is not palindromic.");
	return 0;
}
