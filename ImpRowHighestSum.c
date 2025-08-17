#include <stdio.h>
#include <limits.h>

int main(){
    int a,b, sum=0;
    scanf("%d %d",&a,&b);
    int arr[a][b],max=INT_MIN,count=-1;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    
    for(int i=0;i<a;i++){
        sum=0;
        for(int j=0;j<b;j++){
            sum+=arr[i][j];
        }
        if(max<sum){
            max=sum;
            count=i;
        }
    }
    printf("%d",count);
    return 0;
}