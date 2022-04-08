#include "sword.h"


 Sword:: Sword(string description, int weight, int damage, float value) :Item(description,weight,damage,value){
    setDamage(damage);

};

void Sword::setDamage(int damage){
    this->swordDamage=damage;
};

int Sword::getDamage(){
    return this->swordDamage;
};
