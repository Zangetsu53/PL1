#include <stdio.h>
#include <math.h>
 int main()
 {
	int number, sum=0, temp1, temp2, temp3, power, digit=0;
	printf("please enter a number: ");
	scanf("%d", &number);
	temp1=number;
	temp3=number;
	while (number>0){
		digit++ ;
		number=number/10 ;
	}
	while (temp1>0){
		temp2=temp1%10;
		power= pow(temp2,digit);
		sum=sum+power;
		temp1=temp1/10;
	}
	if(sum==temp3)
		printf("Your number is armstrong number");
	else
		printf("Yours number is not armstrong numebr");	
	
	
	
	
	return 0;
 }
