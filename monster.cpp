#include "monster.h"

monster::monster(string description, int damage, int health): Character(description, health){
    this->monsterDamage = damage;
    this->monsterHealth = health;
}


int monster::damage(){
    return this->monsterDamage;
}
