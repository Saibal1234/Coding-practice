#include<stdio.h>
 void reverse(int arr[],int n);
 void printVal(int arr[],int n);

 int main(){
    int arr[]={1,2,3,4,7,8};
   reverse(arr,6);
   printVal(arr,6);
   return 0;
 }
 
 void printVal(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    } printf("\n");
 }
 void reverse(int arr[],int n){
   for(int i=0;i<n/2;i++){
    int val1=arr[i];
    int val2=arr[n-i-1];
    arr[i]=val2;
    arr[n-i-1]=val1;

   } 
 }