//Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>
int main(){
int a,b,hcf=1;
printf("Enter the numbers: ");
scanf("%d %d",&a,&b);
int min = (a < b) ? a : b;
for(int i=1;i<=min;i++){
    if(a%i==0 && b%i==0){
        hcf =i;
    }
}

printf("%d",hcf);
    return 0;
}
