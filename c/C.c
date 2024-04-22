#include <stdio.h>
//check amstrong number;
void main ()
{
 int num,r,sum=0,arm,c;
 printf("Enter a num: ");
 scanf("%d",&num);
 c=num;
 while(num>0){
  r=num%10;
  sum=(r*r*r)+sum;
  num=num/10;
 }
  arm=sum+num;
 if(c==arm){
    printf("Amstrong\n");
 } else{
    printf("Not Amstrong\n");
 }
}
  
      
 
  
