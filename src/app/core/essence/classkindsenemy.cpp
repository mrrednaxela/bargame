#include <iostream>
#include "classenemy.cpp"
using namespace std;

class beer{
    public:
    enemy beerEnemy;
    void assigment(){
        beerEnemy.setHealth(15);
        beerEnemy.setDamage(rand()%3+3);
        beerEnemy.setAdditional(rand()%1+2);
    };
    void print(){
        cout<<beerEnemy.getHealth()<<"\t"<<beerEnemy.getDamage()<<"\t"<<beerEnemy.getAdditional()<<endl;
    };
};

class b52{
public:
    enemy b52Enemy;
    void assigment(){
        b52Enemy.setHealth(8);
        b52Enemy.setDamage(rand()%5+3);
        b52Enemy.setAdditional(rand()%2+3);
    };
    void printb52(){
      cout<<b52Enemy.getHealth()<<"\t"<<b52Enemy.getDamage()<<"\t"<<b52Enemy.getAdditional()<<endl;
    };
};
