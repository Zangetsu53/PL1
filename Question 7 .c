#include <stdio.h>
int main()
{
	int ct, num, sq;
	ct=1;
	num=1;
	sq=0;
	while (ct <= 10){
		sq= num*num ; 
		printf("%d \n", sq);
		num++ ;
		ct++ ;
	}
	
	return 0;
}
