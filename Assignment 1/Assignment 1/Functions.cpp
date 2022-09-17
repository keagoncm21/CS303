#include "Header.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;


void readFile(vector<int> & nums) //reads a file into a vector
{
	int num = 0;

	ifstream inFile;
	inFile.open("input.txt"); //opening text file
	
	if (!inFile.is_open()) //making sure the file is opening correctly
	{
		cout << "File did not open correctly." << endl;
	}

	while (inFile.good()) //reading each line as long as it is valid
	{
		
		inFile >> num;
		nums.push_back(num); //adding each number to the vector
		
	}
    inFile.close();
}

void returnIndex(vector<int>& nums) //outputs the index of a number entered
{
    int integer;
    
    while (true) 
    {
        
        cout << "Enter the number you'd wish to have the index for: ";
    
        cin >> integer;
        if (cin.fail()) //if something other than an integer is entered, it is caught here
        {
            cin.clear();
            cin.ignore();
            cout << "You're answer must be an integer. Try again." << endl << endl;
        }
        else
            break;

    }

    cout << endl << endl;
    bool found = false;
    for (int i = 0; i < nums.size(); i++) //going through the vector to search for the index of the given number
    {
        if (nums[i] == integer)
        {
            cout << "The index for the number you entered is: " << i << " ";
            found = true;
        }
       
    }
    if (found == false) 
        cout << "This number is not assigned to an index yet.";
   
    cout << endl << endl;

}

void modifyInt(vector<int>& nums) //modifies a specified number to a new number
{
    int integer, originalInt = 0, modifiedInt = 0;

    while (true)
    {
        cout << "Enter the index of the number you wish to modify: ";

        cin >> integer;
        if (cin.fail())//if something other than an integer is entered, it is caught here
        {
            cin.clear();
            cin.ignore();
            cout << "You're answer must be an integer. Try again." << endl << endl;
        }
        else
            break;
    }
    
    if (integer >= 0 && integer < nums.size()) //makes sure the integer given is within the correct parameters of 0 and the max index
    {
        originalInt = nums[integer];
        while (true)
        {
            cout << "What number would you like to change the number in the given index to?: ";
            
            cin >> modifiedInt;
            if (cin.fail())//if something other than an integer is entered, it is caught here
            {
                cin.clear();
                cin.ignore();
                cout << "You're answer must be an integer. Try again." << endl << endl;
            }
            else
            {
                nums[integer] = modifiedInt; //sets the old number to the new one
                break;
            }
        }
    }
    else
    {
        cout << "Sorry, the index you've chosen isn't a valid option." << endl << endl;
    }
    cout << "New Number: " << modifiedInt << "  Old Number: " << originalInt;
    cout << endl << endl;
    
}

void addInt(vector<int>& nums) //adds a new integer to the end of the vector
{
    int integer;
    while (true)
    {
        cout << "Enter the integer you'd wish to add: ";
        
        cin >> integer;
        if (cin.fail())//if something other than an integer is entered, it is caught here
        {
            cin.clear();
            cin.ignore();
            cout << "You're answer must be an integer. Try again." << endl << endl;
        }
        else
            break;
    }
    nums.push_back(integer);
    cout << endl << endl;
}

void removeIndex(vector<int>& nums) //removes a number from the vector
{
    int integer;

    while (true)
    {
        cout << "Enter the index of the number you wish to get rid of: ";
        
        cin >> integer;
        if (cin.fail())//if something other than an integer is entered, it is caught here
        {
            cin.clear();
            cin.ignore();
            cout << "You're answer must be an integer. Try again." << endl << endl;
        }
        else
        {
            if (integer >= 0 && integer < nums.size())
            {
                nums.erase(nums.begin() + (integer)); //erases the given number
            }
            else
            {
                cout << "Sorry, the index you've chosen isn't an option." << endl << endl;
            }
            break;
        }
    }


    
    cout << endl << endl;
}

char choice() //allows the user to make a decision on what to do next/ returns a char matching their decision
{
    cout << endl << "       CHOICES:" << endl
        << "C - Checks if a certain integer exists. If it does, it returns the index of the number." << endl
        << "M - Modifies the value of an integer when called with the index of the integer in the array. Returns the new and old values." << endl
        << "A - Adds a new integer" << endl
        << "R - Given the index of a number, the program will remove the integer that corresponds the index." << endl
        << "Q - Quit" << endl << endl;
    char choice;
    while (true) //function will loop until a valid option is chosen, in which it will return 'choice'
    {
        cin >> choice;
        choice = toupper(choice);
        cout << endl << endl;

        switch (choice) //depending on what the user inputs will decide what get's returned or if the user has to re-enter another input
        {
        case 'C':
            return choice;
        case 'M':
            return choice;
        case 'A':
            return choice;
        case 'R':
            return choice;
        case 'Q':
            return choice;
        default:
            cout << "That is not a valid option, please try again: ";
            continue;
        }
    }
    
    return choice;
}
