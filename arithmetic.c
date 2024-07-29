/********************
 * File   : arithmetic.c
 * Program: To Evaluate the arithmetic expression ((a -b / c * d + e) * (f +g))      
 * Author : Justin jolly
 * Version: 1.0
 * Date   : 19/09/2021
***********************/
#include<stdio.h>
int main(){
    int a,b,c,d,e,f,g,expression;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("Enter the value of c: ");
    scanf("%d",&c);
    printf("Enter the value of d: ");
    scanf("%d",&d);
    printf("Enter the value of e: ");
    scanf("%d",&e);
    printf("Enter the value of f: ");
    scanf("%d",&f);
    printf("Enter the value of g: ");
    scanf("%d",&g);
    expression = ((a - b / c * d + e)*(f + g));
    printf("Solution : %d",expression);
    return 0;
}