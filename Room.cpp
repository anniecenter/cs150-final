#include <iostream>
#include "Room.h"

using namespace std;

//Default Constructor
Room::Room()
{
    roomName = "";
    length = 0;
    width = 0;
    height = 0;
}

//Constructor
Room::Room(string rmNm, double lngth, double wdth, double hght)
{
    setRoomName(rmNm);
    setLength(lngth);
    setWidth(wdth);
    setHeight(hght);
}

/*****************************************************************************
Name: setRoomName()
Purpose: Sets room name for a room object
Parameters: string room name
Return: void
*****************************************************************************/
void Room::setRoomName(string rmNm)
{
    roomName = rmNm;
}

/*****************************************************************************
Name: setLength()
Purpose: Sets lenght for a room object
Parameters: double lngth
Return: void
*****************************************************************************/
void Room::setLength(double lngth)
{
    length = lngth;
}

/*****************************************************************************
Name: setWidth()
Purpose: Sets width for a room object
Parameters: double wdth
Return: void
*****************************************************************************/
void Room::setWidth(double wdth)
{
    width = wdth;
}

/*****************************************************************************
Name: setArea()
Purpose: Sets area for a room object
Parameters: double l, w, h
Return: void
*****************************************************************************/
void Room::setArea(double l, double w, double h)
{
    area = (2 * l * h) + (2 * w * h);
}

/*****************************************************************************
Name: setHeight()
Purpose: Sets height for a room object
Parameters: string hght
Return: void
*****************************************************************************/
void Room::setHeight(double hght)
{
    height = hght;
}

/*****************************************************************************
Name: getRoomName()
Purpose: Returns room name for a room object
Parameters: none
Return: string
*****************************************************************************/
string Room::getRoomName()
{
    return roomName;
}

/*****************************************************************************
Name: getLength()
Purpose: Returns length for a room object
Parameters: none
Return: double
*****************************************************************************/
double Room::getLength()
{
    return length;       
}

/*****************************************************************************
Name: getWidth()
Purpose: Returns width for a room object
Parameters: none
Return: double
*****************************************************************************/
double Room::getWidth()
{
    return width;
}

/*****************************************************************************
Name: getHeight()
Purpose: Returns height for a room object
Parameters: none
Return: double
*****************************************************************************/
double Room::getHeight()
{
    return height;
}

/*****************************************************************************
Name: getArea()
Purpose: Returns area for a room object
Parameters: none
Return: double
*****************************************************************************/
double Room::getArea()
{
    return area;
}

    
