#include <stdio.h>
int main()
{
	int num;
	printf("Please enter a number: ");
	scanf("%d", &num);
	if (num%2==0)
		printf("Yoour number is even.");
	else
		printf("Your number is odd.");	
	
	return 0;
}
