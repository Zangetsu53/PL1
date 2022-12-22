#include <stdio.h>
int main()
{
	int row, num=1, i, j;
	printf("please enter a number: ");
	scanf("%d", &row);
	for (i=1; i<=row; i++){
		for (j=1; j<=i; j++){
			printf("%d", num);
			if (num==1)
				num=0;
			else
				num=1;
			
		}
		printf("\n");
		if (i%2==0)
			num=1;
		else
			num=0;
	}
	
	
	
	return 0;
}
