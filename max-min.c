#include <stdio.h>
#include <limits.h>
int main(){
    int sum=0;
    int max=INT_MIN,min=INT_MAX;
    printf("number of rows and columns of first matrix : ");
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    printf(" %d elments of first matrix : ",r*c);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
            if(arr[i][j] > max) max=arr[i][j];
            if(arr[i][j]< min) min =arr[i][j];
        }
    }
    printf("%d %d",max,min);
    
    
        return 0;
}