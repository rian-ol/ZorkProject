#ifndef CHARACTER_H_
#define CHARACTER_H_
#include "ZorkUL.h"

#include <string>
using namespace std;
#include <vector>
using std::vector;
#include "item.h"


class Character {
protected:
    virtual void health(int health);
    int currentHealth;
private:
    string description;
     vector < string > itemsInCharacter;

public:
    void addItems(string Item);
    Character();
    Character(string description, int currentHealth);
    string shortDescription();
    string longDescription();

};
    string getCurrentHealth();

#endif //CHARACTER_H_
