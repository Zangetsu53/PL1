#include <stdio.h>
#include <math.h>
int main()
{
	while(1){
	
	    	int Num;
	        double  P, Ct=0.0, A=2.0, Sum=0.0, B;
	        printf("Please enter a decimal number: ");
	        scanf("%d",&Num);
	        while (Num>=10){
	            P= pow(A,Ct);            
	            B= fmodf(Num,10.0);
	            Sum=Sum+(B*P);
	            Num=Num/10 ;        
	            Ct=Ct+1 ;
	        }
			P= pow(A,Ct);
	        Sum=Sum+(Num*P);
	        printf("\n %.lf \n",Sum);
 	}
    return 0;
}
