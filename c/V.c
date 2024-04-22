#include<stdio.h>
// find max with help of pointer
int main(){
    int a,b; 
    printf("Enter two number:");
    scanf("%d%d",&a,&b);
    int *ptr1=&a;
    int *ptr2=&b;
    if(*ptr1>*ptr2){
        printf("*ptr1 is max");
    } else if(*ptr1<*ptr2){
         printf("*ptr2 is max");
    } else{
         printf("*ptr1 = *ptr2");
    }
    return 0;
}