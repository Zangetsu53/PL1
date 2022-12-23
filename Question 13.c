#include<stdio.h> 
int main() 
{ 
    int n,i,r,sum,fact,temp; 
    printf("Enter a number\n"); 
    scanf("%d",&n); 
    sum=0; 
    temp=n; 
    while(n>0) 
    { 
        fact = 1; 
        r = n%10; 
        n=n/10; 
        for(i=1;i<=r;i++) 
            fact = fact*i; 
        sum+=fact; 
    } 
    n=temp; 
    if(sum == n) 
        printf("%d is a Strong Number\n",n); 
    else 
        printf("%d is not a Strong Number",n); 
    return 0 ; 
} 
