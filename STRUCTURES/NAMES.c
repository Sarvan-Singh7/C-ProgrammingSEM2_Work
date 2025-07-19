#include <stdio.h>
#include <string.h>
int main(){
    struct Person{
        char name[50];
        float salary;
        int age;
    }a,b;
    
    strcpy(a.name,"Sarry");
    a.salary = 2300000.77;
    a.age = 25;
    
    strcpy(b.name,"Marry");
    b.salary = 4300000.77;
    b.age = 45;
    
    printf("%s\n",a.name);
    printf("%d",b.age);

    return 0;
}
