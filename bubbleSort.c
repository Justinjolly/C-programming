/***************************************
 * File   : bubbleSort.c
 * program: To perform bubble sort
 * Author : Justin Jolly
 * Version: 1.0
 * Date   : 19/09/2021
****************************************/
#include<stdio.h>
int main(){
    int array[10];
    int i,j,limit,temp;
    printf("Enter the size of the array: ");
    scanf("%d",&limit);       
    printf("Enter the values:");
    for(i=0;i<limit;i++){
        scanf("%d",&array[i]);
    }
    /*printf("The values before sorting:\n");
    for(i=0;i<limit;i++){
        printf("%d ",array[i]);
    }*/
    for(i=0;i<limit-1;i++){
        for(j=0;j<limit-i-1;j++){
            if(array[j]>array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    printf("\nThe value after sorting:\n");
    for(i=0;i<limit;i++){
        printf("%d ",array[i]);
    }
    return 0;
}