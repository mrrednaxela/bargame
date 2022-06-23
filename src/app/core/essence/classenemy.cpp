#include <iostream>
using namespace std;

class enemy{
public:
    void setHealth(int itSetHealth){
        health=itSetHealth;
    };
    int getHealth(){
        return health;
    };
    void setDamage(int itSetDamage){
        damage=itSetDamage;
    };
    int getDamage(){
        return damage;
    };
    void setAdditional(int itSetAdditional){
        additionalDamage=itSetAdditional;
    };
    int getAdditional(){
        return additionalDamage;
    };
private:
    int health=0;
    int damage=0;
    int additionalDamage=0;
};