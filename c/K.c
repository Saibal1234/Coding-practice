#include<stdio.h>
 float squarearea(float side);
 float circlearea(float rad);
float rectanglearea(float a,float b);
int main(){
     float a,b,side,rad;
       printf("Enter side");
       scanf("%f",&side);
      printf("Area of square is %f\n",squarearea(side));
   
       printf("Enter radius: ");
        scanf("%f",&rad);
        printf("Area of circle is %f\n",circlearea(rad));
    
       printf("Enter a and b: ");
       scanf("%f%f",&a,&b);
       printf("Area of rectangle is %f\n",rectanglearea(a,b));

      return 0;
}
  float squarearea(float side){
       
   return side*side;
  }
   float circlearea(float rad){
        return (3.14*rad*rad);
  }
   float rectanglearea(float a,float b){
        return a*b;
  }
