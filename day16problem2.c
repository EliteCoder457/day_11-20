//Write a program to check if a number is a palindrome.

#include <stdio.h>
int main(){
int n, reverse=0, remainder,original;
printf("enter the number: ");
scanf("%d",&n);
original=n;
while(n>0){
    remainder=n%10;
    reverse=reverse*10+remainder;
    n=n/10;
}
if (original==reverse){
    printf("The number is a palindrome");
}
else {
    printf("The number is not a palindrome");
}
    return 0;
}
