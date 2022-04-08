#include "Character.h"

Character::Character(string description, int health) {
    this->description = description;
    this->currentHealth = health;
}
void Character::addItems(Item &item) {
    itemsInCharacter.push_back(item);
}
void Character::addItems(Item *item) {
    itemsInCharacter.push_back(*item);
    delete item;
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


