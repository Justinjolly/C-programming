/********************
 * File   : addTwoNumbers.c
 * Program: To Find sum of two numbers.
 * Author : Justin jolly
 * Version: 1.0
 * Date   : 21/06/2021 
***********************/
#include<stdio.h>
int main(){
    int number1,number2,sum;
    printf("Enter Number1: ",number1);
    scanf("%d",&number1);
    printf("Enter Number2: ",number2);
    scanf("%d",&number2);
    sum = number1+number2;
    printf("The sum of two numbers is : %d",sum);
    return 0;
}