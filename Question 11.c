#include <stdio.h>
int main()
{
	int number, sum=0, i;
	printf("please enter a number: ");
	scanf("%d", &number);
	for (i=1;i<number;i++){
		if (number%i==0){
			sum=sum+i;
		}
		
		
	}
	if(sum==number)
		printf("your number is perfect number");
	else
		printf("your number is not perfect number");
	return 0;
}
