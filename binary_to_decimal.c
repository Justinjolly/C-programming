#include<stdio.h>
int main(){
    int n,i,rem,dec=0,base=1;
    printf("Enter a binary number: ");
    scanf("%d",&n);
    while(n>0){
        rem=n%10;
        dec=dec+rem*base;
        
        n=n/10;
        base=base*2;
    }
    printf("%d",dec);
    return 0;
}