//ismein reverse kiya by using extra array
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],brr[n];
    
    for(int i=0;i<n;i++){
        printf("Enter A Number : ");
        scanf("%d",&arr[i]);
    }
    
    for(int j=0;j<n;j++){
        brr[j]=arr[n-1-j];
        printf("%d\n",brr[j]);
    }
    return 0;
}