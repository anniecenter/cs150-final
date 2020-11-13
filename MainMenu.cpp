// File Name: MainMenu.cpp
// Author: Annie Center
// Email Address: anniecenter96@gmail.com
// Course: CS 150
// Assignment: Final Project
// Date: May 15, 2017
// Last Update: May 9, 2017
// Problem statement:
// Algorithm:	-Open File
//              -Read in from file
//              -Close file
//              -allow user to choose action to perform
//              -call function of user's choice
// Input:
// Output: 

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include "Customer.h"
#include "Room.h"
#include "FileHandler.h"
#include "MenuFunctions.h"

using namespace std;

/*****************************************************************************
Name: main()
Purpose: displays the main menu and lets the user branch to other functions
Parameters: none
Return: int 0 to end program
*****************************************************************************/
int main()
{
    const int SIZE = 10;
    Customer customerData[SIZE];
    int currentIndex = -1;
    
    
    fstream file("CustomerData.txt");
    
    while(file)
        readFromFile(file, customerData, currentIndex);

	
	//Variables
	char choice = '0';

	//Keeps showing inv menu until valid number is input
	while (choice != '7')
	{
		//Menu Screen
		system("cls");
		cout << endl << endl;
		cout << "\tPaint Calculator" << endl;
		cout << "\tMain Menu" << endl << endl;
		cout << "\t1. Create a Customer" << endl;
		cout << "\t2. Save All Data" << endl;
		cout << "\t3. Print Customer Details" << endl;
		cout << "\t4. Print All Unique Customer Names" << endl;
		cout << "\t5. Delete a Customer" << endl;
		cout << "\t6. Sort Data" << endl;
		cout << "\t7. Exit" << endl << endl;
		cout << "\tEnter your choice: ";
		cin >> choice;
		cout << endl;

		//Checks that the user's choice is between 1 and 5
		while (choice < '1' || choice > '7')
		{
			cout << "\tPlease enter a number in the range 1-7: ";
			cin >> choice;
		}

		//Branches program based on user choice
		switch (choice)
		{
			case '1' :
            {
                //creates person as long as there's space
                if(currentIndex < SIZE)
                {
                    currentIndex++;
                    Customer person = createCustomer();
				    customerData[currentIndex] = person;
                }
                else 
                {
                    cout << "Cannot create new customer." << endl;
                }
				break;
            }
			case '2' :
            {
			    saveAllData();
				break;
            }
			case '3' :
            {
                //Prints customer details if customer exists
                Customer someGuy = searchCustomer(customerData, SIZE);
				printCustomerDetails(someGuy);
				break;
            }
			case '4' :
            {
				printUniqueCustomerNames(customerData, currentIndex);
				system("pause");
				break;
            }
			case '5' :
            {
                Customer person = searchCustomer(customerData, SIZE);
				deleteCustomer(person);
			 	break;
            }
			case '6' :
            {
				sortData(customerData, SIZE);
				break;
            }
			case '7' :
				break;
		}
	}

    file.close();
    return 0;
}

