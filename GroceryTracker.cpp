/*
*  Author: Sara Kohl
*  Title: GroceryTracker.cpp  -- function definitions
*  Date: 12/14/2024
*/


using namespace std;

//includes header for class declarations
#include "GroceryTracker.h"


/* function to open input file and map each line with its relative frequency 
*  takes no parameters, returns nothing
*/
void GroceryTracker::ReadFile() {
	ifstream groceryInput; //input file var
	string theFood; //string to temporarily store each line of the input file

	groceryInput.open("Project_Three_Input_File.txt");

	if (!groceryInput.is_open()) { //checks if input file is open
		cout << "Could not open file reviews.txt." << endl; //if not, throws error
	}
	else {
		getline(groceryInput, theFood); //stores first line from input file in string theFood

		while (!groceryInput.fail()) { //continues until end of file
			
			//if a key corresponding to string currently held in theFood exists in the map itemFreq, 
			//the int value mapped to it will increase by one, 
			//else the key will be created and its int set to 1
			itemFreq[theFood]++; 

			getline(groceryInput, theFood); //continues to next line
			
		}

		groceryInput.close(); //closes file
		
		}
	}

/* function to print the menu
*  takes no parameters, returns nothing
*/
void GroceryTracker::PrintList() {
	
	cout << "MENU: " << endl;
	cout << "1. Get the frequency of a single grocery item." << endl;
	cout << "2. Get the frequency of each grocery item purchased." << endl;
	cout << "3. View grocery data histogram." << endl;
	cout << "4. Exit program." << endl;
	cout << endl << "Please enter a number between 1 and 4." << endl;
}

/* function to print the relative frequency of a grocery item
*  takes string item as a parameter (user input of grocery item), returns nothing
*/
void GroceryTracker::GetFreqIndiv(string item) {

	cout << item << " " << itemFreq[item] << endl; //prints out item and its frequency

}

/* function to print the relative frequency of each grocery item
*  takes no parameters, returns nothing
*  saves all printed data to backup file "data.txt"
*/
void GroceryTracker::GetFreqAll() {

	oFile.open("frequency.dat"); //opens output file data.txt
	oFile << "All Frequencies: " << endl; //writes label to backup file

	//iterates through each item in map container itemFreq
	for (const auto& i : itemFreq) {
		cout << i.first << " " << i.second << endl; //prints item and respective frequency
		oFile << i.first << " " << i.second << endl; //writes printed information to backup file
	}
	oFile.close(); //closes file
}

//function that takes frequency (int n) as parameter and returns that number of asterisks as a string
string GroceryTracker::Stars(int n) {

	string outp; //string to hold the stars that will be output

	//appends one star to output string for each iteration--iterates n (frequency parameter) times
	for (int i = 0; i < n; i++) {
		outp.append("*");
	}

	return outp; //returns amount of stars corresponding to frequency parameter
}

/* function to print a histogram of each grocery item's relative frequency
*  takes no parameters, returns nothing
*  saves all printed data to backup file "data.txt"
*/
void GroceryTracker::Histogram() {
	
	oFile.open("frequency.dat", ios_base::app); //opens file in append mode to avoid overwrite
	oFile << endl << "Histogram: " << endl; //label for data in file

	//iterates through each item in map container itemFreq
	for (const auto& i : itemFreq) {
		cout << i.first << " " << Stars(i.second) << endl; //prints out each key (item) and calls Stars with frequency parameter
		oFile << i.first << " " << Stars(i.second) << endl; //writes same information as printed to file for backup
	}
	oFile.close(); //closes file
}

/* function to validate if user input is present in the map itemFreq
*  takes string inp as parameter, returns boolean value
*  used to validate user input for menu option 1
*/
bool GroceryTracker::isVal(string inp)
{
	//checks if user input is in map, assigns item to location
	auto item = itemFreq.find(inp);

	//checks if location is not at the end of map (ie, is present in map
	if (item != itemFreq.end()) 
		return true; //returns true if item is present
	else
		return false; //returns false if end of map
	
}
