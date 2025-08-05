#include <stdio.h>
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    int prod=1;
    for(int i=n;i>0;i--){
        prod=prod*i;
        
    }
    printf("%d",prod);
    
    return 0;
}