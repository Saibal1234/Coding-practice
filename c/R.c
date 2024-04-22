#include<stdio.h>
#include<math.h>
// find square of a number using function
float calculate_squareroot(float n);
int main(){
    float n;
    printf("Entera number:");
    scanf("%f",&n);
    printf("Squareroot of a number is: %.2f",calculate_squareroot(n));
    return 0;
}
float calculate_squareroot(float n){
    float c;
    c=sqrt(n);
    return c;
}