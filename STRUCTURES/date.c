#include<stdio.h>
#include <string.h>
int main(){
    typedef struct date{
        int date;
        int month;
        int year;
    }date;
    
    date a,b;
    
    scanf("%d %d %d",&a.date,&a.month,&a.year);
    scanf("%d %d %d",&b.date,&b.month,&b.year);
    
    if(a.date == b.date && a.month == b.month && a.year == b.year){
        printf("Equal");
    }
    else{printf("Unequal");}
    
    return 0;
}
