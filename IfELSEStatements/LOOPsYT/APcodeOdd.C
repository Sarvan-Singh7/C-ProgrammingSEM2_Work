#include <stdio.h>
int main(){
    int x;
    int i;
    printf("enter a number : ");
    scanf("%d",&x);
    for(i=1;i<=2*x-1;i=i+2){
        printf("%d \n",i);
    }
    
    // printf("%d",i);
    return 0;
}