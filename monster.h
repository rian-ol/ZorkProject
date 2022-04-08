#ifndef MONSTER_H
#define MONSTER_H
#include "Character.h"

class monster: public Character
{
public:
  ~monster();
   monster(string description, int damage, int health);
   int damage();
   virtual void health();

private:
   int monsterDamage;
   int monsterHealth;

};

#endif // MONSTER_H
