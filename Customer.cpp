// File Name: Customer.cpp
// Author: Annie Center
// Email Address: anniecenter96@gmail.com
// Course: CS 150
// Assignment: Final Project
// Date: May 15, 2017
// Last Update: May 9, 2017
// Problem statement: Defines Customer class functions
// Input:
// Output:

#include "Customer.h"   

//Constructors
Customer::Customer()
{
    customerName = "";
}
//Constructor for 1 room
Customer::Customer(string cstmrNm, Room rm1)
{
    setCustomerName(cstmrNm);
    room1 = rm1;
    setNumOfRooms('1');
}
//Constructor for 2 rooms
Customer::Customer(string cstmrNm, Room rm1, Room rm2)
{
    setCustomerName(cstmrNm);
    room1 = rm1;
    room2 = rm2;
    setNumOfRooms('2');
}
//Constructor for 3 rooms
Customer::Customer(string cstmrNm, Room rm1, Room rm2, Room rm3)
{
    setCustomerName(cstmrNm);
    room1 = rm1;
    room2 = rm2;
    room3 = rm3;
    setNumOfRooms('3');
}
//Constructor for 4 rooms
Customer::Customer(string cstmrNm, Room rm1, Room rm2, Room rm3, Room rm4)
{
    setCustomerName(cstmrNm);
    room1 = rm1;
    room2 = rm2;
    room3 = rm3;
    room4 = rm4;
    setNumOfRooms('4');
}

/*****************************************************************************
 Name: createCustomer()
 Purpose: Asks for user input to create a new customer
 Parameters:
 Return: void
 *****************************************************************************/       
void Customer::setCustomerName(string cstmrNm)
{
    customerName = cstmrNm;
}

/*****************************************************************************
 Name: createCustomer()
 Purpose: Asks for user input to create a new customer
 Parameters:
 Return: void
 *****************************************************************************/
void setDimensions(double l, double w, double h)
{
    
}

/*****************************************************************************
 Name: createCustomer()
 Purpose: Asks for user input to create a new customer
 Parameters:
 Return: void
 *****************************************************************************/
string Customer::getCustomerName()
{
    return customerName; 
}

/*****************************************************************************
 Name: createCustomer()
 Purpose: Asks for user input to create a new customer
 Parameters:
 Return: void
 *****************************************************************************/
Room Customer::getRoom1()
{
    return room1;   
}

/*****************************************************************************
 Name: createCustomer()
 Purpose: Asks for user input to create a new customer
 Parameters:
 Return: void
 *****************************************************************************/
Room Customer::getRoom2()
{
    return room2;   
}

/*****************************************************************************
 Name: createCustomer()
 Purpose: Asks for user input to create a new customer
 Parameters:
 Return: void
 *****************************************************************************/
Room Customer::getRoom3()
{
    return room3;   
}

/*****************************************************************************
 Name: createCustomer()
 Purpose: Asks for user input to create a new customer
 Parameters:
 Return: void
 *****************************************************************************/
Room Customer::getRoom4()
{
    return room4;   
}

/*****************************************************************************
 Name: setNumOfRooms()
 Purpose: sets the number of rooms a customer wants painted
 Parameters: char num
 Return: void
 *****************************************************************************/
void Customer::setNumOfRooms(char num)
{
    numOfRooms = num;
}

/*****************************************************************************
 Name: getNumOfRooms()
 Purpose: Gets the number of rooms a customer wants painted
 Parameters: rooms
 Return: char
 *****************************************************************************/
char Customer::getNumOfRooms()
{
    return numOfRooms;   
}

/*****************************************************************************
 Name: setTotalArea()
 Purpose: sets total area by adding rooms together
 Parameters: rooms
 Return: void
 *****************************************************************************/
void Customer::setTotalArea(Room rm1)
{
    double area1 = rm1.getArea();
    
    totalArea = area1;
}

/*****************************************************************************
 Name: setTotalArea()
 Purpose: sets total area by adding rooms together
 Parameters: rooms
 Return: void
 *****************************************************************************/
void Customer::setTotalArea(Room rm1, Room rm2)
{
    double area1 = rm1.getArea();
    double area2 = rm2.getArea();
   
    totalArea = area1 + area2;
}

/*****************************************************************************
 Name: setTotalArea()
 Purpose: sets total area by adding rooms together
 Parameters: rooms
 Return: void
 *****************************************************************************/
void Customer::setTotalArea(Room rm1, Room rm2, Room rm3)
{
    double area1 = rm1.getArea();
    double area2 = rm2.getArea();
    double area3 = rm3.getArea();
    
    totalArea = area1 + area2 + area3;
}

/*****************************************************************************
 Name: setTotalArea()
 Purpose: sets total area by adding rooms together
 Parameters: rooms
 Return: void
 *****************************************************************************/
void Customer::setTotalArea(Room rm1, Room rm2, Room rm3, Room rm4)
{
    double area1 = rm1.getArea();
    double area2 = rm2.getArea();
    double area3 = rm3.getArea();
    double area4 = rm4.getArea();
    
    totalArea = area1 + area2 + area3 + area4;
}

/*****************************************************************************
 Name: getTotalArea()
 Purpose: gets total area
 Parameters:
 Return: void
 *****************************************************************************/
double Customer::getTotalArea()
{
    return totalArea;
}


