#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
      if(num%2!=0){
            break;
      }
       printf("%d\n",i);
    }
          
}