#include<stdio.h>
/*sum of digits of a number*/
int sum(int n);
//     int r,sum=0;
//     while(n>0){
    
//     r=n%10;
//     sum=sum+r;
//     n/=10;
//      }
//     return sum;
 
 int main(){
    int n,d,m;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(d=0,m=n;m>0;m/=10,d++);
    printf("digit is %d\n",d);
    printf("Sum of all digits is: %d",sum(n));
    return 0;
    }
 int sum(int n){
 int r,sum=0;
    while(n>0){
    
    r=n%10;
    sum=sum+r;
    n/=10;
     }
    return sum;
} 