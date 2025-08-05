
//////code for palindrome    yaad rkhna n>0

#include <stdio.h>
int main(){
    int n;
    printf("enter a nunmber : ");
    scanf("%d",&n);
    int sum=0;
    int a,sumo;
    int org=n;
    for(int i=1;n>0;i++){
        a=n%10;
        sum=sum*10+a;
        sumo=sum;
        n=n/10;
        
    }
    if(org==sum){
        printf("palindrome");
    }
    else{
        printf("not a palindrome");
    }
    // printf("%d",sumo);
    
    
    return 0;
}
