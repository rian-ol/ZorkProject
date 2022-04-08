#include "Character.h"

Character::Character(string description, int health) {
    this->description = description;
    this->currentHealth = health;
}
void Character::addItems(Item *item) {
    itemsInCharacter.push_back(item);
}
void Character::dropItems(Item *item) {
    itemsInCharacter.push_back(*item);
    delete item;
}

int Character::getTotalWeight(){
    int totalWeight;
    for(int i=0; i<itemsInCharacter.size();i++){
        totalWeight += itemsInCharacter.at(i).getWeight();
    }
}

string Character::longDescription()
{
  string ret = this->description;
  ret += "\n Item list:\n";
  for (vector<Item>::iterator i = itemsInCharacter.begin(); i != itemsInCharacter.end(); i++)
    ret += "\t"+ (*i).getLongDescription() + "\n";
  return ret;
}
void Character:: health(int health){
    this->currentHealth=health;
}

string Character::getCurrentHealth(){
    return currentHealth.to_String;
}


