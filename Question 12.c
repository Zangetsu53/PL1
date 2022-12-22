#include <stdio.h>
int main()
{
	int lim, sum=0, i, j;
	printf("please entet the limit: ");
	scanf("%d", &lim);
	for (i=1; i<=lim ;i++){
		for (j=1 ;j<i ;j++){
			sum=0;
			if(i%j==0) {
				sum=sum+j;
			}
		}
		if(sum==i)
			printf("%d \n", i);
		else
			continue;
	}
	
	
	return 0;
}
