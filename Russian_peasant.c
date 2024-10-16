/***********************
 * Program: To Multiply two numbers using russian peasant method. 
 * Date   : 13/10/2024
 **********************/
#include<stdio.h>
int main(){
    int n1,n2,a,b,pro=0;
    printf("Enter two numbers: ");
    scanf("%d%d",&n1,&n2);
    a=n1;
    b=n2;
    while(a>=1){
        if(a%2!=0){
            pro=pro+b;
        }
        a/=2;
        b*=2;
    }
    printf("%d x %d = %d",n1,n2,pro);
    return 0;
}