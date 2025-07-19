#include <stdio.h>
#include <string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int attack;
        int defence;
        char name[20];
    }pokemon;
    
    pokemon arr[3];
    
    arr[0].hp = 100;
    arr[0].attack = 200;
    arr[0].defence = 90;
    strcpy(arr[0].name,"Pika");
    
    arr[1].hp = 200;
    arr[1].attack = 100;
    arr[1].defence = 80;
    strcpy(arr[1].name,"Pik");
    
    arr[2].hp = 300;
    arr[2].attack = 500;
    arr[2].defence = 900;
    strcpy(arr[2].name,"Pi");
    
    for(int i=0;i<3;i++){
        printf("%s\n",arr[i].name);
        printf("%d\n",arr[i].defence);
        printf("%d\n",arr[i].attack);
        printf("%d\n",arr[i].hp);

    }
    
}