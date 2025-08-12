#include <stdio.h>
int main(){

    int x;
    printf("enter a value");
    scanf("%d",&x);

    if(x<0){
           printf("%d",-x);

    }
    else{
        printf("%f",x);
    }

    return 0;
}