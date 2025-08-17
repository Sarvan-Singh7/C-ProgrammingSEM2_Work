#include <stdio.h>
int main(){
    int a,b;
    a=2,b=2;
    int arr[2][2]={1,3,5,7};
    int brr[2][2] ={2,4,6,8};
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
           arr[i][j] += brr[i][j];
        }
        printf("\n");
    }
    
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
           printf("%d",arr[i][j]);
        }
        printf("\n");
    }
}