#include <stdio.h>
int main()
{
	int Num;
	printf("Please enter a natural number: ");
	scanf("%d", &Num);
	while (Num<=0){
		printf("Please enter a positive number. \n");
		printf("Please enter a natural number: ");
		scanf("%d", &Num);
	}
	while (Num>0){
		printf("%d \n", Num);
		Num--;	
	}
	
	
	return 0;
}
