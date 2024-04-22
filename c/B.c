#include<stdio.h>
// print grade of a student
int main()
 {
   int marks;
    printf("Enter a marks\n");
     scanf("%d",&marks);
   if(marks<30) 
   {
     printf("c\n");
   }
   else if(marks>=30&&marks<70)
    {
       printf("B\n");
    }
    else if(marks>=70&&marks<90)
    {
        printf("A\n");
    }
    else if(marks>=90&&marks<100)
    {
        printf("A+");
    }
    else{
        printf("Wrong number \n");
    }
    return 0;
}