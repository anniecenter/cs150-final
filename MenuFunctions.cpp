// File Name: MenuFunctions.cpp
// Author: Annie Center
// Email Address: anniecenter96@gmail.com
// Course: CS 150
// Assignment: Final Project
// Date: May 15, 2017
// Last Update: May 9, 2017
// Problem statement: Defines Main Menu Functions
// Input:
// Output:

#include "MenuFunctions.h"
#include "Customer.h"
#include "Room.h"
#include <iostream>
#include <string>

using namespace std;

/*****************************************************************************
 Name: createCustomer()
 Purpose: Asks for user input to create a new customer
 Parameters:
 Return: void
 *****************************************************************************/
Customer createCustomer()
{
    system("cls");

    //declaring variables
    string name;
    char numOfRooms;
    string rName;
    double l;
    double w;
    double h;
    Room rm1;
    Room rm2;
    Room rm3;
    Room rm4;
    Customer person;
    
    //Prompts user for information
    cout << "Please enter the following information:" << endl << endl;
    cout << "Customer Name: ";
    cin >> name;
    cout << "Number of Rooms (1-4): ";
    cin >> numOfRooms;
    
    //Checks that the user's choice is between 1 and 4
	while (numOfRooms < '1' || numOfRooms > '4')
	{
		cout << "\tPlease enter a number in the range 1-4: ";
		cin >> numOfRooms;
	}
    
    //Uses a different Customer constructor based on the number of rooms
    switch(numOfRooms)
    {
        case '1' :
            {
                //Creates room object to pass to new customer
                rm1 = getRoomInfo(); 
                
                //Creates Customer using the 1 room constructor    
                person = Customer(name, rm1);
                
                //Sets numOfRooms for later use
                person.setNumOfRooms(numOfRooms);
                break;
            }       
        case '2' :
            {
                //Creates room objects to pass to new customer
                rm1 = getRoomInfo(); 
                rm2 = getRoomInfo();  
                
                //Creates Customer using the 2 room constructor  
                person = Customer(name, rm1, rm2);
                
                //Sets numOfRooms for later use
                person.setNumOfRooms(numOfRooms);
                break;
            }            
        case '3' : 
            {
                //Creates room objects to pass to new customer
                rm1 = getRoomInfo(); 
                rm2 = getRoomInfo();  
                rm3 = getRoomInfo();
                
                //Creates Customer using the 3 room constructor  
                person = Customer(name, rm1, rm2, rm3);
                
                //Sets numOfRooms for later use
                person.setNumOfRooms(numOfRooms);
                break;
            }
        case '4' :
            {
                //Creates room objects to pass to new customer
                rm1 = getRoomInfo(); 
                rm2 = getRoomInfo();
                rm3 = getRoomInfo(); 
                rm4 = getRoomInfo(); 
                
                //Creates Customer using the 4 room constructor   
                person = Customer(name, rm1, rm2, rm3, rm4);
                
                //Sets numOfRooms for later use
                person.setNumOfRooms(numOfRooms);
                break;
            }
            
    }
    
    
    return person;
}

/*****************************************************************************
 Name: getRoomInfo()
 Purpose: Gets room name and dimensions from user then creates and returns a 
          new Room object
 Parameters: none
 Return: Room
 *****************************************************************************/
Room getRoomInfo()
{
    string rName;
    double l;
    double w;
    double h;
    
    //prompt user for room info
    cout << endl;
    cout << "Room Name: ";
    cin >> rName;
    cout << "Room's Length: ";
    cin >> l;
    checkDimension(l);
    cout << "Room's Width: ";
    cin >> w;
    checkDimension(w);
    cout << "Room's Height: ";
    cin >> h;
    checkDimension(h);
    
    Room newRoom = Room(rName, l, w, h);
    
    return newRoom;
}

/*****************************************************************************
 Name: checkDimension()
 Purpose: Checks that a user-input dimension is not a negative or a char
 Parameters: double dimension
 Return: double
 *****************************************************************************/
double checkDimension(double dimension)
{
    bool isGood = false;
    
	while (!isGood)
	{
		if(dimension > 0)
		{
            isGood = true;
            return dimension;
        }
        else
        {
            cout << "Invalid input. Please only enter positive numbers."; 
            cout << endl;
		    cout << "Please enter a new number: ";
		    cin >> dimension;
        }
	}
	return dimension;
}

/*****************************************************************************
 Name: saveAllData()
 Purpose: Saves all data
 Parameters:
 Return: void
 *****************************************************************************/
void saveAllData()
{
	cout << "Save All Data" << endl << endl;
	system("pause");
}

/*****************************************************************************
 Name: printCustomerDetails()
 Purpose: Prints details of a customer object
 Parameters: 
 Return: void
 *****************************************************************************/
void printCustomerDetails(Customer &someGuy)
{
    system("cls");
    
    char numRooms = someGuy.getNumOfRooms();
    
	switch(numRooms)
	{
        case '1' :
            {
                string customerName = someGuy.getCustomerName();
                Room room1 = someGuy.getRoom1();
                
                cout << "Customer Name: " << customerName << endl << endl;
                printRoomDetails(room1);
                
                someGuy.setTotalArea(room1);
                double totalArea = someGuy.getTotalArea();
                
                cout << "Total Area: " << totalArea << endl << endl;
                
                system("pause");
                break;
            }
        case '2' :
            {
                string customerName = someGuy.getCustomerName();
                Room room1 = someGuy.getRoom1();
                Room room2 = someGuy.getRoom2();
                
                cout << "Customer Name: " << customerName << endl << endl;
                printRoomDetails(room1);
                printRoomDetails(room2);
                
                someGuy.setTotalArea(room1, room2);
                double totalArea = someGuy.getTotalArea();
                
                cout << "Total Area: " << totalArea << endl << endl;
                
                system("pause");
                break;
            }
        case '3' :
            {
                string customerName = someGuy.getCustomerName();
                Room room1 = someGuy.getRoom1();
                Room room2 = someGuy.getRoom2();
                Room room3 = someGuy.getRoom3();
                
                cout << "Customer Name: " << customerName << endl << endl;
                printRoomDetails(room1);
                printRoomDetails(room2);
                printRoomDetails(room3);
                
                someGuy.setTotalArea(room1, room2, room3);
                double totalArea = someGuy.getTotalArea();
                
                cout << "Total Area: " << totalArea << endl << endl;
                
                system("pause");
                break;
            }
        case '4' :
            {
                string customerName = someGuy.getCustomerName();
                Room room1 = someGuy.getRoom1();
                Room room2 = someGuy.getRoom2();
                Room room3 = someGuy.getRoom3();
                Room room4 = someGuy.getRoom4();
                
                cout << "Customer Name: " << customerName << endl << endl;
                printRoomDetails(room1);
                printRoomDetails(room2);
                printRoomDetails(room3);
                printRoomDetails(room4);
                
                someGuy.setTotalArea(room1, room2, room3, room4);
                double totalArea = someGuy.getTotalArea();
                
                cout << "Total Area: " << totalArea << endl << endl;
                
                system("pause");
                break;
            }
    }
}

/*****************************************************************************
 Name: printRoomDetails()
 Purpose: Prints details of a room object
 Parameters:
 Return: void
 *****************************************************************************/
void printRoomDetails(Room &room)
{
    string roomName = room.getRoomName();
    double length =  room.getLength();
    double width = room.getWidth();
    double height = room.getHeight();
    room.setArea(length, width, height);
    double area = room.getArea();
    
                
    cout << "Room Name: " << roomName << endl;
    cout << "Length: " << length << endl;
    cout << "Width: " << width << endl;
    cout << "Height: " << height << endl;
    cout << "Area: " << area << endl << endl;
}

/*****************************************************************************
 Name: searchCustomer()
 Purpose: Asks the user for a Customer name and then uses binary search 
 Parameters: Customer array and int
 Return: void
 *****************************************************************************/
Customer searchCustomer(Customer customers[], int arSize)
{
    system("cls");
    
    string searchName; //Name we're looking for
	Customer foundCustomer;
    int index = 0; //Index in array
    int position = -1; //Position of value
    bool found = false; //flag for use in search
    
    //Promting user
    cout << "Please enter the name of a customer: ";
    cin >> searchName;
    
    //Linear Search for the number
    while(index < arSize && !found)
    {
        if(customers[index].getCustomerName() == searchName) //if name is found
        {
            found = true;
            position = index;
            foundCustomer = customers[index];
        }
        index++;
    }
    
    if(found == false) //if name is not found
    {
        cout << "Sorry, no customer of the name " << searchName << " exists.";
        cout << endl << endl;
		
		system("pause");
		
        searchCustomer(customers, arSize);
    }
	
	return foundCustomer;
	
    system("pause");
}

/*****************************************************************************
 Name: printUniqueCustomerNames()
 Purpose: Prints only non-repeated names of customers
 Parameters: Customer array and int size
 Return: void
 *****************************************************************************/
void printUniqueCustomerNames(Customer array[], int size)
{
    //Clears Screen
    system("cls");
    
    //Sorts names
	sortData(array, size);
	
	cout << "List of Customers:" << endl << endl;
    
    //Prints name only if it's not the same as the following name
    for(int i = 0; i <= size; i++)
    {
        if(array[i].getCustomerName() != array[i + 1].getCustomerName())
            cout << "-" << array[i].getCustomerName() << endl;
    }
    
    cout << endl;
}

/*****************************************************************************
 Name: deleteCustomer()
 Purpose: Deletes a customer by making their name a blank string
 Parameters: Customer person
 Return: void
 *****************************************************************************/
void deleteCustomer(Customer person)
{
	person.setCustomerName("");
}

/*****************************************************************************
 Name: sortData()
 Purpose: Sorts Data
 Parameters: Customer array and int size
 Return: void
 *****************************************************************************/
void sortData(Customer array[], int size)
{
	int counter = 0;
    Customer temp;
    bool swap; 
    
    do
    {
        swap = false;
        for(int i = 0; i < size; i++)
        {
            //if the current name is greater than the next they are swapped
            if(array[i].getCustomerName() > array[i + 1].getCustomerName())
            {
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                swap = true;
                counter++;
            }
        }
    } while(swap);
}

