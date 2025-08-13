#include <stdio.h>
int main(){
    int arr[5]={
        2,4,5,6,1
    };
    printf("%p\n",&arr[0]);
    printf("%p\n",&arr[1]);
    printf("%p\n",&arr[3]);
    printf("%p\n",&arr[4]);
    printf("%p\n",&arr[5]);
    return 0;
}