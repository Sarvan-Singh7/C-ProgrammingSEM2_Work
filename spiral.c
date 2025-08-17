#include <stdio.h>
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int arr[m][n];
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }printf("\n");
    
    int minr=0;
    int maxr=m-1;
    int minc=0;
    int maxc=n-1;
    int tne=m*n;
    int count=0;
    
    while(count<tne){
        //print the minimum row
        for(int j=minc;j<=maxc && count<tne;j++){
            printf("%d ",arr[minr][j]);
            count++;
        }
        minr++;
        
        //print the maximum column
        for(int j=minr;j<=maxr && count<tne;j++){
            printf("%d ",arr[j][maxc]);
            count++;
        }
        maxc--;
        
        //print the maximum row
        for(int j=maxc;j>=minc && count<tne;j--){
            printf("%d ",arr[maxr][j]);
            count++;
        }maxr--;
        
        //print the minimum columns
        for(int j=maxr;j>=minr && count<tne;j--){
            printf("%d ",arr[j][minc]);
            count++;
        }minc++;
    }
    return 0;
}