#include <stdio.h>
#include <string.h>
typedef struct pokemon{
    int hp;
    int attack;
    int speed;
    char tier;
    char name[20];
}pokemon;
int main(){
    pokemon pikachu;
    pikachu.hp = 70;
    pikachu.attack = 70;
    pikachu.speed = 70;
    pikachu.tier = 'A';

    strcpy(pikachu.name,"pikachu");

    printf("%s\n",pikachu.name);
    printf("%d\n",pikachu.attack);
    pokemon *x = &pikachu;
    x->hp = 100;            // tjis is also used to modify or assign;
    
    (*x).attack = 1000;    // attack modified by this or i can also assign by the same
    printf("%d\n",(*x).attack);
    printf("%d",(*x).hp);

}

//-----------------------//-----------------------//

#include <stdio.h>
#include <string.h>
typedef struct pokemon{
    int hp;
    int attack;
    int speed;
    char tier;
    char name[20];
}pokemon;
void change(pokemon *p){
    (*p).attack = 100;
    strcpy((*p).name,"bomb");
    return;
}
int main(){
    pokemon pikachu;
    pikachu.hp = 70;
    pikachu.attack = 70;
    pikachu.speed = 70;
    pikachu.tier = 'A';

    strcpy(pikachu.name,"pikachu");

    printf("%s\n",pikachu.name);
    printf("%d\n",pikachu.attack);
   
    change(&pikachu);
    
    printf("%s\n",pikachu.name);
    printf("%d\n",pikachu.attack);
}
