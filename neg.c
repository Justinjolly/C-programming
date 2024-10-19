#include <stdio.h>

int main() {
    // Write C code here
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n<0){
        printf("Number is negative");
    }
    else{
        printf("Number is positve");
    }
    return 0;
}