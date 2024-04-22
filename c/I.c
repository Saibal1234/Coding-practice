#include<stdio.h>
int main(){
    int n,r,rev=0;
   printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=5;i++){  
       
        r=n%10;
        rev= rev*10+r;
         n=n/10;
         }
    printf("%d",rev);
    return 0;
    }

      