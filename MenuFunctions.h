#ifndef MENUFUNCTIONS_H
#define MENUFUNCTIONS_H

#include <iostream>
#include "Customer.h"
#include "Room.h"

//Prototypes
Customer createCustomer();
void saveAllData();
void printCustomerDetails(Customer &someGuy);
void printUniqueCustomerNames(Customer customers[], int size);
void deleteCustomer(Customer person);
void sortData(Customer array[], int size);
Room getRoomInfo();
double checkDimension(double dimension);
Customer searchCustomer(Customer customers[], int arSize);
void printRoomDetails(Room &room);

#endif 
