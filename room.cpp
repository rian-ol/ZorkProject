#include <iostream>
#include "room.h"

room::room(){
    createRoom();
}

room::room(std::string name, std::string description){
    createRoom(name, description);
}

std::string room::description(){
    return roomDescription;
}

void allocateAdjacentRooms(room* north, room*south, room*east, room*west){
    
}


void room::createRoom(std::string name, std::string description){
    this->roomName = name;
    this->roomDescription = description;
}