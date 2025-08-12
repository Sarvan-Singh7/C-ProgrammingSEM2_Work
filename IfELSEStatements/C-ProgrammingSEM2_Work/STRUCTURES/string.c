#include <stdio.h>
#include <string.h>
typedef struct Student{
    int Rollnumber;
    char Name[20];
    char dept[30];
    char course[10];
    int joining;

}student;


void seme(student s1,student s2){
    if(strcmp(s1.dept,s2.dept) ==0){  // strcmp is used to compare strings in c. it returns 0 if both are same.
        // if(s1.dept == s2.dept){  // this will not work as it will compare the address of the string and not the content of the string.
        printf("same");
    }
    else{printf("not same");}
    return;
}
int main(){
    student s1,s2;
    strcpy(s1.dept,"CSE");
    strcpy(s2.dept,"CSE");

    
    
    seme(s1,s2);
}

//     return 0;
// }                    