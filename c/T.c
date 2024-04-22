#include<stdio.h>
// check a number is amstrong or not using recursion
void check_armstrongnumber(int n);
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
  check_armstrongnumber(n);
  return 0;
}
void check_armstrongnumber(int n){
    int r,sum=0,c=n,arm;
    while(n>0){
        r=n%10;
        sum=(r*r*r)+sum;
        n=n/10;
}
    arm=n+sum;
    if(c==arm){
        printf("ARMSTRONG\n");
    } else{
        printf("NOT ARMSTRONG");
    }
}