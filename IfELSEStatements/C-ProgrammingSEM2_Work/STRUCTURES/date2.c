#include<stdio.h>
#include <string.h>
int main(){
    typedef struct date{
        int date;
        int month;
        int year;
    }date;
    
    date a,b,c;
    c=a;//phle yahan kiya toh garbage value le raha tha as it was before scanf of a
    scanf("%d %d %d",&a.date,&a.month,&a.year);
    c=a;
    
    if(a.date == c.date && a.month == c.month && a.year == c.year){
        printf("Equal");
    }
    else{printf("Unequal");}
    
    return 0;
}