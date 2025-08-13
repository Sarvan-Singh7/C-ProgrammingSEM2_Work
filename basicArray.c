#include <stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};// can only take one datatype in a single array
    arr[1]=8;
    printf("%d",arr[3]);
    
    return 0;
}
//float AND CHAR ALSO AVAILIBLE
#include <stdio.h>
int main(){
    float arr[5]={1,2,3,4,5};
    arr[1]=8;
    printf("%.2f",arr[3]);
    
    return 0;
}