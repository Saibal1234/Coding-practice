#include<stdio.h>
void calculate(int a,int b,int *sum,int *pro,int *ave);
int main(){
        int a,b ;
    printf("Enter two number:");
    scanf("%d%d",&a,&b);
    int sum,pro,ave;
    calculate(a,b,&sum,&pro,&ave);
    printf("sum is %d\n & pro is %d\n & ave is %d",sum,pro,ave);
}
void calculate(int a,int b,int *sum,int *pro,int *ave){
    *sum=a+b;
    *pro=a*b;
    *ave=(a+b)/2;
}