#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("G.c","r");
    char ch;
    fscanf(fptr,"%c",&ch);
    printf("char=%c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("char=%c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("char=%c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("char=%c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("char=%c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("char=%c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("char=%c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("char=%c\n",ch);
    fclose(fptr);
    return 0;
}