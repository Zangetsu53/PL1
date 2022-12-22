#include <stdio.h>
#include <math.h>
int main()
{
	int times, temp, sum1=0, sum2=0, P, ct=0, i;
	printf("Please enter how many times you want: ");
	scanf("%d", &times);
	for (i=1; i<=times; i++){
		temp=i;
		ct=0;
		sum1=0;
		while (temp>0){
			P= pow(10,ct);
			sum1=sum1 + (1*P);
			ct++ ;
			temp--;
		}
		sum2=sum2+sum1;
	}
	printf("%d", sum2);
	return 0;
}

