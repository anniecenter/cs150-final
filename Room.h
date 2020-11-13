#ifndef ROOM_H
#define ROOM_H

#include <iostream>
#include <string>

using namespace std;

class Room
{
    private:
		//Member Variables
		string roomName;
        double length;
        double width;
        double height;
        double area;
    
    public:
		//Default Constructor
		Room();
		//Constructor
		Room(string rmNm, double lngth, double wdth, double hght);
		
		//Setters
		void setRoomName(string rmNm);
        void setLength(double lngth);
		void setWidth(double wdth);
		void setHeight(double hght);
		void setArea(double l, double w, double h);
		//Getters
		string getRoomName();
        double getLength();
		double getWidth();
		double getHeight();
		double getArea();
};

#endif
