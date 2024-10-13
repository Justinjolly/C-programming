#include<stdio.h>
int main(){
    int amount,n,n100=0,n50=0,n20=0,n10=0,n5=0,n2=0,n1=0;
    printf("Enter the Amount: ");
    scanf("%d",&amount);
    n=amount;
    n100=n/100;
    n=n%100;
    n50=n/50;
    n=n%50;
    n20=n/20;
    n=n%20;
    n10=n/10;
    n=n%10;
    n5=n/5;
    n=n%5;
    n2=n/2;
    n=n%2;
    n1=n/1;
    n=n%1;
    if (n100 > 0)
        printf("Rs100 Notes: %d\n", n100);
    if (n50 > 0)
        printf("Rs50 Notes : %d\n", n50);
    if (n20 > 0)
        printf("Rs20 Notes : %d\n", n20);
    if (n10 > 0)
        printf("Rs10 Notes : %d\n", n10);
    if (n5 > 0)
        printf("Rs5 Notes  : %d\n", n5);
    if (n2 > 0)
        printf("Rs2 Notes  : %d\n", n2);
    if (n1 > 0)
        printf("Rs1 Notes  : %d\n", n1);
    
    return 0;
}