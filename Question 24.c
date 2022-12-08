#include <stdio.h>
int main(){
	int N, A, Ct0=0, Ct1=0, Ct2=0, Ct3=0, Ct4=0, Ct5=0, Ct6=0, Ct7=0, Ct8=0, Ct9=0;
	printf("Please enter a number: ");
	scanf("%d", &N);
	while(N/10>0){
		A=N%10;
		if(A==0)
			Ct0+=1;
		if (A==1)
			Ct1+=1;
		if (A==2)
			Ct2+=1;
		if (A==3)
			Ct3+=1;
		if (A==4)
			Ct4+=1;
		if (A==5)
			Ct5+=1;
		if (A==6)
			Ct6+=1;
		if (A==7)
			Ct7+=1;
		if (A==8)
			Ct8+=1;
		if (A==9)
			Ct9+=1;
		N=N/10;									
	}
	if(N==0)
		Ct0+=1;
	if (N==1)
		Ct1+=1;
	if (N==2)
		Ct2+=1;
	if (N==3)
		Ct3+=1;
	if (N==4)
		Ct4+=1;
	if (N==5)
		Ct5+=1;
	if (N==6)
		Ct6+=1;
	if (N==7)
		Ct7+=1;
	if (N==8)
		Ct8+=1;
	if (N==9)
		Ct9+=1;
	
	printf("0: %d\n1: %d\n2: %d\n3: %d\n4: %d\n5: %d\n6: %d\n7: %d\n8: %d\n9: %d", Ct0,Ct1,Ct2,Ct3,Ct4,Ct5,Ct6,Ct7,Ct8,Ct9);
	
	
	return 0;
}
