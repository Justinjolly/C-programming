#include<stdio.h>
#include<stdlib.h>
#define SIZE 4
void push();
void pop();
void show();
int a[SIZE],top=-1;
int main(){
    int op,i;
    while(1){
    printf("\nEnter the option");
    printf("\n1.push\n2.pop\n3.Show\n4.Exit\n");
    scanf("%d",&op);
    switch(op){
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            show();
            break;
        case 4:
            printf("Exit");
            exit(0);
            break;
    }
   }
    return 0;
}
void push(){
    int i,num;
    if(top==SIZE-1){
        printf("UnderFlow");
    }
    printf("Enter the element: ");
    scanf("%d",&num);  
    top=top+1;
    a[top]=num;

}
void pop(){
    if(top==-1){
        printf("Under flow");
    }
    else{
        top=top-1;
    }

}
void show(){
    int i;
    for(i=top;i>=0;--i){
        printf("%d\t",a[i]);
    }
}