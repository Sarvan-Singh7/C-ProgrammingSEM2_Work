#include <stdio.h>
int main(){

    int x,y;
    printf("enter cost price value");
    scanf("%d",&x);
    printf("enter selling price value");
    scanf("%d",&y);
    
    if(y>x){
        
        printf("profit of %d is made",y-x);
    }
    if(x>y){
        printf("loss of %d is incurred",x-y);
    }
    if(x==y){
        printf("no profit and no loss");
    }

    

    return 0;
}