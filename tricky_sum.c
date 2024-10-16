#include <stdio.h>
int main()
{
    int n, i=0, j=0,sum=1;
    printf("enter a number: ");
    scanf("%d", &n);
    while(sum<n){
        sum=sum+i;
        if(sum>=n){
            break;
        }
        i++;  
      printf("%d ",sum);  
      j=j+sum;
    }
    printf("\nsum = : %d",j);
    return 0;
}