#include<stdio.h>
#include<string.h>
 struct address{
    int houseNo;
    int block;;
    char city[100];
    char state[100];
 };
 void printAdd(struct address add);
 int main(){
    struct address add[5];
    printf("Enter Ist people Info");
    scanf("%d\n",&add[0].houseNo);
    scanf("%d\n",&add[0].block);
    scanf("%s\n",&add[0].city);
    scanf("%s\n",&add[0].state);
     
    printf("Enter 2nd people Info");
    scanf("%d\n",&add[1].houseNo);
    scanf("%d\n",&add[1].block);
    scanf("%c\n",&add[1].city);
    scanf("%c\n",&add[1].state);
   
    printf("Enter 3rd people Info");
    scanf("%d\n",&add[2].houseNo);
    scanf("%d\n",&add[2].block);
    scanf("%c\n",&add[2].city);
    scanf("%c\n",&add[2].state);
    
    printf("Enter 4th people Info");
    scanf("%d\n",&add[3].houseNo);
    scanf("%d\n",&add[3].block);
    scanf("%c\n",&add[3].city);
    scanf("%c\n",&add[3].state);
     
    printf("Enter 5th people Info");
    scanf("%d\n",&add[4].houseNo);
    scanf("%d\n",&add[4].block);
    scanf("%c\n",&add[4].city);
    scanf("%c\n",&add[4].state);
    printAdd(add[0]);
    printAdd(add[1]);
    printAdd(add[2]);
    printAdd(add[3]);
    printAdd(add[4]);
    return 0;
 }
 void printAdd(struct address add){
    printf("address is %d,%d,%s,%s\n",add.houseNo,add.block,add.city,add.state);
 }