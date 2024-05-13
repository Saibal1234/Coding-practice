#include<stdio.h>
int main(){
    float price[3];
    printf("Enter Ist Item Price: ");
    scanf("%f",&price[0]);
    printf("Enter 2nd Item Price: ");
    scanf("%f",&price[1]);
    printf("Enter 3rd Item Price: ");
    scanf("%f",&price[2]);
    float gst;
     printf("Enter gst: ");
    scanf("%f",&gst);
    printf("Total Price of Ist Item is:%f\n",price[0]+(gst*price[0]));
     printf("Total Price of 2nd Item is:%f\n",price[1]+(gst*price[1]));
      printf("Total Price of 3rd Item is:%f\n",price[2]+(gst*price[2]));
   return 0;
}