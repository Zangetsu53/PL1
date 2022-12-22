#include <stdio.h>
int main()
{
	int Ct=1, Sum=0;
	while (Ct<=50){
		Sum+=Ct;
		Ct++;
	}
	printf("%d", Sum);
	return 0;
}
