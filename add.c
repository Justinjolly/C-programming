#include<stdio.h>
int add(int a[],int n);
int main(){
    int i,arr[5];
    for(i=0;i<5;i++){
        printf("Enter the value a[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    printf("%d",add(arr,5));
    return 0;
}
int add(int a[],int n){
    int sum=0,i;
    for(i=0;i<n;i++){
        sum=sum+a[i];
    }
    return sum;
}