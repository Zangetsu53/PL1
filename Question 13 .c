#include <stdio.h>
int main()
{
	int n=1, m, L;
	printf("please enter the limit of the table: ");
	scanf("%d", &L);
	while (n<=L){
		m=n*6 ;
		printf("%d \n", m);
		n++ ;
		
	}
	
	
	return 0;
}
