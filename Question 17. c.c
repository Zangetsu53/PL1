#include <stdio.h>
#include <math.h>
int main()
{
	
	double Sum, Num, R;
	printf("Please enter a natural number: ");
	scanf("%lf", &Num);
	R= fmod(Num,2.0);
	if (R==0){
		Sum=0.0 ;
		while(Num>0){
			Sum=Sum+(1/Num) ;
			Num=Num-2;
		}
	}
	else{
		Sum=(1/Num);
		Num=Num-1 ;
		while (Num>0){
			Sum=Sum+(1/Num);
			Num=Num-2 ;
		}
	}
	printf("%lf", Sum);
	
	return 0;
}
