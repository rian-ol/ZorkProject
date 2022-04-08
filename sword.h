#ifndef SWORD_H
#define SWORD_H
#include "item.h"

class Sword
{
  public:
     Sword();
    Sword(string description,int weight,int damage, float value);
    int getDamage();
    void setDamage(int damage);

private:
    int swordDamage;
};


#endif // SWORD_H
