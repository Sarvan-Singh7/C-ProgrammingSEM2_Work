#include <stdio.h>
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    int count;
    int sum=0;
    int ld;
    
    for(count=0;n>0;count++){
        ld=n%10;
        if(ld%2==0){
        sum=sum+ld;}
        n=n/10;
    }
    
    printf("sum is %d",sum);
    return 0;
    
}