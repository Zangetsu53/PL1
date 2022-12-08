#include <stdio.h>
int main()
{
	int Num1, Num2, HCF, Temp;
	printf("Please enter two number \n");
	scanf("%d %d", &Num1, &Num2);
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
	printf("Highest Common Factor of your two number is: %d", HCF);
	return 0;
}
