#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    bool foundUnique = false;

    for (int i = 0; i < n; i++) {
        bool isUnique = true;
        for (int j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            printf("%d\n", arr[i]);
            foundUnique = true;
            break;
        }
    }
    
    if (!foundUnique) {
        printf("No unique element found\n");
    }
    
    return 0;
}


#include <stdio.h>
#include <stdbool.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        bool flag=false;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j])
            flag=true;
        }
        if(flag==false){
        printf("%d",arr[i]);
        break;
        }}
    
   
    return 0;
}