#include <stdio.h>
int main(){
    float x,y,z;
    printf("enter first number : ");
    scanf("%f",&x);
    printf("enter second number : ");
    scanf("%f",&y);
    printf("enter third number : ");
    scanf("%f",&z);
    
    if(x>y && x>z){
        printf("x is greatest");
    }
    
    if(y>z && y>x){
        printf("y is greatest");
    }
    
    if(z>x && z>y){
        printf("z is greatest");
    }
    
    return 0;
}