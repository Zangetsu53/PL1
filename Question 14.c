#include <stdio.h>
int main()
{
	int i, j, temp, temp2, fac, sum, n;
	printf("Please enter the number n: ");
	scanf("%d", &n);
	for (i=1; i<=n; i++){
		temp=i;
		sum=0;
		while(temp>0){
			fac=1;
			temp2=temp%10;
			temp=temp/10;
			for(j=1; j<=temp2; j++){
				fac=fac*j;
			}
			sum=sum+fac;
		}
		if(sum==i)
			printf("%d ", i);
	}
	
	
	return 0;
}
