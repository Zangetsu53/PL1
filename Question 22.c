#include <stdio.h>
int main()
{
	int i, sum=0;
	for (i=100; i<=200; i++){
		if (i%9==0){
			printf("%d\n", i);
			sum=sum+i;
		}
		
	}
	printf("And the sum of all above is %d",sum);
	return 0;
}
