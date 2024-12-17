/*
*  Author: Sara Kohl
*  Title: GroceryTracker.h -- function declarations
*  Date: 12/14/2024
*/

#ifndef GROCERYTRACKER_H
#define GROCERYTRACKER_H

//all include statements needed throughout the program
#include <unordered_map>
#include <iostream>
#include <iomanip>
#include <map>
#include <iterator>
#include <algorithm>
#include <fstream>
#include <string>

//declares class GroceryTracker 
class GroceryTracker {

public: //public functions and variables of GroceryTracker objects
	void ReadFile();
	void PrintList();
	void GetFreqIndiv(string item);
	void GetFreqAll();
	string Stars(int n);
	void Histogram();
	bool isVal(string inp);
	ofstream oFile;
	
private: //private variable(s) of GroceryTracker objects
	unordered_map<string, int> itemFreq;
};

#endif