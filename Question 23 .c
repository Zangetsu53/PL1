#include <stdio.h>
#include <math.h>
int main()
{
	while(1){
	
	    int Num;
	        double  P, Ct=0.0, A=10.0, Sum=0.0, B;
	        printf("Please enter a binary number: ");
	        scanf("%d",&Num);
	        while (Num>=1){
	            P= pow(A,Ct);            
	            B= fmodf(Num,2.0);
	            Sum=Sum+(B*P);
	            Num=Num/2 ;        
	            Ct=Ct+1 ;
	        }
	
	        Sum=Sum+(Num*P);
	        printf("\n %.lf \n",Sum);
 	}
    return 0;
}
