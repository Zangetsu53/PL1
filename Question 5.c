#include <stdio.h>
int main()
{
	int Ct=0,A=2, B=1;
	while(Ct<4){
		B=B*A;
		Ct++;
	}		
	printf("%d", B);
	
	return 0;
}
