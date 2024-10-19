/***********************
 * Program: To find non fibanocci numbers. 
 * Date   : 09/10/2024
 **********************/
#include <stdio.h>
int main() {
    int i,n1=0,n2=1,n3=n1+n2;
    for(i=1;i<=20;i++){
        if(i!=n3){
            printf("%d ",i);
        }
        else{
            n1=n2;
            n2=n3;
            n3=n1+n2;
        }
    }
    return 0;
}
