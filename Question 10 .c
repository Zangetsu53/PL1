#include <stdio.h>
int main()
{
	int a, b, c;
	printf("Please enter three number a,b and c\n");
	printf("a: ");
	scanf("%d", &a);
	printf("b: ");
	scanf("%d", &b);
	printf("c: ");
	scanf("%d", &c);
	if (a>b && a>c)
		printf("The most greater is %d", a);
	else if (b>c && b>a)
		printf("The most greater is %d", b);
	else
		printf("The most greater is %d", c);		
	return 0;
}
