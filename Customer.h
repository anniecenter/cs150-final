#ifndef CUSTOMER_H
#define CUSTOMER_H


#include <iostream>
#include <string>
#include "Room.h"

using namespace std;

class Customer
{
    private:
		//Member Variables
        string customerName;
        char numOfRooms;
        double totalArea;
        Room room1;
        Room room2;
        Room room3;
        Room room4;
        
    public:
		//Default Constructor
		Customer();
		//One Room Constructor
		Customer(string cstmrNm, Room rm1);
		//Two Room Constructor
        Customer(string cstmrNm, Room rm1, Room rm2);
        //Three Room Constructor
		Customer(string cstmrNm, Room rm1, Room rm2, Room rm3);
        //Four Room Constructor
	    Customer(string cstmrNm, Room rm1, Room rm2, Room rm3, Room rm4);
		//Setters
		void setCustomerName(string cstmrNm);
		void setNumOfRooms(char num);
		string getCustomerName();
		void setTotalArea(Room rm1);
		void setTotalArea(Room rm1, Room rm2);
		void setTotalArea(Room rm1, Room rm2, Room rm3);
		void setTotalArea(Room rm1, Room rm2, Room rm3, Room rm4);
		//Getters
        char getNumOfRooms();
		Room getRoom1();
		Room getRoom2();
		Room getRoom3();
		Room getRoom4();
		double getTotalArea();
		
};

#endif
