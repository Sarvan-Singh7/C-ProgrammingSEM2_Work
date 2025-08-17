#include <stdio.h>
#include <limits.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int arr[a][b];
    int sum;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int max=INT_MIN;
    for(int i=0;i<a;i++){
        sum=0;
        for(int j=0;j<b;j++){
           sum+=arr[i][j];
        }
        if(max<sum)
            max=sum;
            
        printf("%d ",max);
    }
