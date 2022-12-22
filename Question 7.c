#include <stdio.h>
int main()
{
	int Num, ct, i, j;
	printf("Please enter the limit: ");
	scanf("%d", &Num);
	for (i=2;i<=Num;i++){

		for(j=2;j<i;j++){
			ct=0;
			if (i%j==0){
				ct++;
				break;
			}
		}
		if (ct==0){
			printf("%d ", i);
		}
	}
	return 0;
}
