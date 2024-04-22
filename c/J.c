#include<stdio.h>
void calculate_price(float value);

int main(){
    float value;

    printf("Enter a value\n: ");
    scanf("%f",&value);
    calculate_price(value);

    return 0;
}
 void calculate_price(float value){
    value=value+(0.18*value);
    printf("New Value is %f",value);
 }
