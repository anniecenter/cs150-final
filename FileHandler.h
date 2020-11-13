#ifndef FILEHANDLER_H
#define FILEHANDLER_H

#include <iostream>
#include <string>
#include "Customer.h"
#include "Room.h"

using namespace std;

void readFromFile(fstream &file, Customer customerData[], int &currentIndex);	
void writeToFile(fstream &file);
Room getRoomFromFile(fstream &file);
#endif 
