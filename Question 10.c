#include <stdio.h>
#include <math.h>
int main()
{
	int sum, i, n, digit, temp1, temp2=0, temp3, power;
	printf("please enter the limit: ");
	scanf("%d", &n);
	for (i=1;i<=n;i++){
		digit=0;
		temp1=i;
		temp3=i;
		sum=0;
		while(temp3>0){
			digit++;
			temp3=temp3/10;
		}
		while(temp1>0){
			temp2=temp1%10;
			power= pow(temp2,digit);
			sum=sum+power;
			temp1=temp1/10;
		}
		if(sum==i)
			printf("%d \n", i);
	}
	
	return 0;
}
