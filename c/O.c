#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n; 
 printf("Enter a num: ");
    scanf("%d",&n);
    
    for(int i=1;i<=n+1;i++){
        if(i%7==0){
            continue;
        }
            printf("%d ",i);
        
    }
    return 0;
}