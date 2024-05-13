//use of strcpy

#include<stdio.h>
#include<string.h>

int main(){
   char oldName[100]="Saibal";
   char newName[]="Roy";
   strcpy(oldName,newName);
   puts(oldName); 
   return 0;
}
// use of strlen

#include<stdio.h>
#include<string.h>
int printLength(char str[]);
int main(){
    char name[100]="Saibal";
    
    printf("Length is %d",strlen(name));
}
int printLength(char str[]){
    int count=0;
    for(int i=0;str[i]!=0;i++){
      count++;
    }
    return count-1;
}