#include <stdio.h>

int main(){
    
    int x;
    printf("enter a Number : ");
    scanf("%d",&x);
    
    //yaad rkhna ki code agar c ka ho toh hum 90<x<100  krke nahin likh skte iske bajaye logical operators use kr skte hain
    
    
    if(90<x){
        printf("GRADE A");}
        
    else if(80<x){
        printf("GRADE B");}
        
    else if(70<x){
        printf("GRADE C");}
        
    else if(60<x){
        printf("GRADE D");}
        
    else if(50<x){
        printf("GRADE E");}
        
    else if(40<x){
        printf("GRADE F");}
        
        
    else{
        printf("FAIL");}
    
    return 0;
}