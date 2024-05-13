#include<stdio.h>
#include<string.h>
typedef struct BankAccountInformation{
    int accNo;
    char name[100];
} BAI;
int main(){
    BAI s1;
    s1.accNo=122345;
    strcpy(s1.name,"Saibal");
    printf("Information is: %d,%s\n",s1.accNo,s1.name);
    return 0;
}