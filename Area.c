/********************
 * File   : Area.c
 * Program: To Find Area of Circle.       
 * Author : Justin jolly
 * Version: 1.0
 * Date   : 26/06/2021
***********************/
#include<stdio.h>
int main(){
    int radius,areaOfCircle;
    printf("\nEnter the radius of circle: ");
    scanf("%d",&radius);
    areaOfCircle=3.14*radius*radius;
    printf("Area Of Circle= %d",areaOfCircle);
    return 0;
}