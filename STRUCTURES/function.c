#include <stdio.h>
typedef struct pokemon{  // structure is declared 
    int hp;
    int attack;
    int defence;
}pokemon;




 void fn(pokemon pikachu){  // as pokemon is datatype and pikachu is variable 
    printf("%d\n",pikachu.attack);  // function is made to print values but outide main fn
    printf("%d\n",pikachu.hp);
    return;
}

void func(pokemon pikachu){
    printf("\n");
    pikachu.hp =100;  // value  of attributes can be changed within fn. 
    pikachu.attack=200;
    pikachu.defence = 500;
    
    
    
}

int main(){
    pokemon pikachu;    //variable nameed pikachu created 
    
    pikachu.hp=20;
    pikachu.attack=40;
    fn(pikachu);
    func(pikachu);
 printf("%d\n",pikachu.attack); 
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.defence);
    // printf("%d\n",pikachu.defence);  // this will give garbage value as it is not initialized}