#include<stdio.h>
#include <string.h>
int main(){
    typedef struct cricketers{
        char FirstName[20];
        char LastName[20];
        int age;
        int test_played;
        float avgRuns;
    }cricketers;
    
    cricketers arr[3];
    
    
    
    for(int i=0;i<3;i++){
        scanf("%s",arr[i].FirstName);
        scanf("%s",arr[i].LastName);
        scanf("%d",&arr[i].age);
        scanf("%d",&arr[i].test_played);
        scanf("%f",&arr[i].avgRuns);
    }
    
    for(int i=0;i<3;i++){
        printf("First name : %s\n",arr[i].FirstName);
        printf("Last name : %s\n",arr[i].LastName);
        printf("age : %d\n",arr[i].age);
        printf("matches played %d\n",arr[i].test_played);
        printf("average runs secured : %.2f\n\n\n",arr[i].avgRuns);
    }
    
    
    
    
    return 0;
}