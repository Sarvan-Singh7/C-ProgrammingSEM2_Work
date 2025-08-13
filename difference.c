#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],sumodd=0,sumeven=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(i%2==0){
            sumeven=sumeven+arr[i];
        }
        else{
            sumodd=sumodd+arr[i];
        }
    }
    printf("%d",sumeven-sumodd);
    
    return 0;
}