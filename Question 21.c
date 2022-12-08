#include <stdio.h>
int main(){
	int Num, LD, FD;
	printf("Please enter a number: ");
	scanf("%d", &Num);
	LD=Num%10 ;
	while(Num/10>0)
		Num=Num/10;
	FD=Num%10;
	printf("This is the first digit of your number: %d\n", FD);
	printf("This is the last digit of your number: %d", LD);
	
	return 0;
}
