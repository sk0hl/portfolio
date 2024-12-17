/*
*  Author: Sara Kohl
*  Title: Main.cpp
*  Date: 12/14/2024
*/

using namespace std;

//includes header for class declarations
#include "GroceryTracker.h"


int main() {
	string choice; //to hold user number input 
	string item; //to hold user input for choice 1

	GroceryTracker todaysGroc; //initializes GroceryTracker object

	todaysGroc.ReadFile(); //calls member function to get all data from input file

	todaysGroc.PrintList(); //calls member function to print menu
	cin >> choice; //stores user input in choice variable

	while (choice != "4") { //since choice 4 exits the program, choice==4 will terminate the while loop and end the program

		if (choice == "1") { //menu option one

			cin.ignore(); //flushes stream

			cout << "Please enter a grocery item: ";
			getline(cin, item); //takes user input to pass as parameter for GetFreqIndiv()

			while (!todaysGroc.isVal(item)) { //calls input validation function, repeats loop until the function returns true
				cout << "Invalid entry. Please enter another grocery item: ";
				getline(cin, item); //takes new user input

			}

			todaysGroc.GetFreqIndiv(item); //calls member function to print item frequency 

		}

		else if (choice == "2") { //menu option two

			todaysGroc.GetFreqAll(); //calls member function to print all item frequencies

		}

		else if (choice == "3") { //menu option three

			todaysGroc.Histogram(); //calls member function to print histogram 

		}
		//output after any choice is made, defaults to this output if input is invalid
		cout << "Please enter a number between 1 and 4." << endl;
		cin >> choice;
	}
}