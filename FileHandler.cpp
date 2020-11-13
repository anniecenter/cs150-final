// File Name: FileHandler.cpp
// Author: Annie Center
// Email Address: anniecenter96@gmail.com
// Course: CS 150
// Assignment: Final Project
// Date: May 15, 2017
// Last Update: May 9, 2017
// Problem statement: Handles input and output
// Input:
// Output:

#include "FileHandler.h"
#include "Customer.h"
#include "Room.h"
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

void readFromFile(fstream &file, Customer customerData[], int &currentIndex)
{
    string name;
    char numOfRooms;
    file >> name;
    file >> numOfRooms;
    
    switch(numOfRooms)
    {
        case '1' :
        {
            currentIndex++;
                
            Room rm1 = getRoomFromFile(file);
            
            Customer newCustomer = Customer(name, rm1);
            
            customerData[currentIndex] = newCustomer;
    
            break;
        }
        case '2' :
        {
            currentIndex++;
                
            Room rm1 = getRoomFromFile(file);
            Room rm2 = getRoomFromFile(file);
                
            Customer newCustomer = Customer(name, rm1, rm2);
        
            customerData[currentIndex] = newCustomer;
            
            break;
        }
        case '3' :
        {
            currentIndex++;
                
            Room rm1 = getRoomFromFile(file);
            Room rm2 = getRoomFromFile(file);
            Room rm3 = getRoomFromFile(file);
            
            Customer newCustomer = Customer(name, rm1, rm2, rm3);
            
            customerData[currentIndex] = newCustomer;
            
            break;
        }
        case '4' :
        {
            currentIndex++;
                
            Room rm1 = getRoomFromFile(file);
            Room rm2 = getRoomFromFile(file);
            Room rm3 = getRoomFromFile(file);
            Room rm4 = getRoomFromFile(file);
            
            Customer newCustomer = Customer(name, rm1, rm2, rm3, rm4);
            
            customerData[currentIndex] = newCustomer;
        
            break;   
        }
    
    }
}

Room getRoomFromFile(fstream &file)
{
    string rName;
    double l;
    double w;
    double h;
    
    file >> rName;
    file >> l;
    file >> w;
    file >> h;
    
    Room newRoom = Room(rName, l, w, h);
    
    return newRoom;
}
