#include <stdio.h>
int main()
{
	double HCF, LCM, A;
	int Num1, Num2, Temp;
	printf("Please enter two number \n");
	scanf("%d %d", &Num1, &Num2);
	A=Num1*Num2;
	if(Num1>Num2){
		while (Num1 % Num2!=0){
			Temp=Num1 % Num2;
			Num1=Num2;
			Num2=Temp;
		}
		HCF=Num2;
	}
	else{
		while (Num2 % Num1!=0){
			Temp=Num2 % Num1;
			Num2=Num1;
			Num1=Temp;
		}
		HCF=Num1;
	}
	LCM=A/HCF;
	printf("LCM of two number is: %lf", LCM);
	
	return 0;
}
