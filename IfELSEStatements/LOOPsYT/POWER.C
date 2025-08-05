#include <stdio.h>
int main(){
    int n,m;
    printf("enter BASE : ");
    scanf("%d",&n);
    printf("enter POWER : ");
    scanf("%d",&m);
    int power=1;
    for(int i=1;i<=m;i++){
        power=power*n;
    }
    printf("%d",power);
    
    return 0;
}