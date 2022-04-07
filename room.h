#ifndef room_H_
#define room_H_


struct room 
{
    room();
    room(std::string roomName, std::string roomDescription);
    void allocateAdjacentRooms(room* North, room* south, room* east, room* west);
    void createRoom(std::string roomName="", std::string roomDescription="");
    std::string room::description();

    

    std::string roomDescription;
    std::string roomName;


    //pointers for the rooms that will be accessible from current 
    room* northRoom;
    room* southRoom;
    room* eastRoom;
    room* westRoom;





};

#endif // room_H_