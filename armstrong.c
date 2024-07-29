/***************************************
 * File   : armstrong.c
 * program: To check whether the number is armstrong number or not.
 * Author : Justin Jolly
 * Version: 1.0
 * Date   : 19/09/2021
****************************************/
#include<stdio.h>
int main(){
    int number,originalNumber,remainder,armstrong=0;
    printf("Enter a 3 digit number to check whether it is an armstrong number or not:");
    scanf("%d",&number);
    originalNumber=number;
    while(number>0){
        remainder=number%10;
        armstrong=armstrong+remainder*remainder*remainder;
        number=number/10;
    }
    if(originalNumber==armstrong){
        printf("The number is an armstrong number");
    }
    else{
        printf("The number is not an armstrong number");
    }
    return 0;
}