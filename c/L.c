#include<stdio.h>
int factorial(int n);
int main(){
     int n;
     printf("Enter number: ");
     scanf("%d",&n);
     printf("Factorial is %d\n",factorial(n),factorial(n));
    return 0;
}
 int factorial(int n){
if(n==1){
    return 1;
}
  int fact1=factorial(n-1);
  int fact2=factorial(n-1)*n;
  return fact2;
  }
