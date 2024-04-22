#include<stdio.h>
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
   if(n==0||n==1){
    printf("Not prime number");
  } else{
        for(int i=2;i<=n/2;){
          ++i;
            if(n%i==0){
                printf("It is a Composite Number");}
               
            else{
                printf("It is a Prime Number");} break;
            
        }
    return 0;
}
}