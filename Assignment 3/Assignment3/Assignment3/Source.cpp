//Keagon Madison
//Class: CS303 UMKC
//Last accessed: 12/7/2022

#include <iostream>
#include <queue>
#include <map>
#include <string>

#include "Header.h"

using namespace std;


int main()
{
	string possible_palindrome;
	string stateName;

	map<string, string> stateDataMap; //creating map

	queue<int> queue1; //creating a queue
	queue1.push(1);  //adding elements to the queue
	queue1.push(2); 
	queue1.push(3);
	queue1.push(4);

	cout << "Queue before move_to_rear: \n";
	print_queue(queue1); //printing the queue

	move_to_rear(queue1); //using move_to_rear function to change the queue

	cout << "\nQueue after move_to_rear: \n";
	print_queue(queue1); //printing the queue after move_to_rear

	cout << endl << "Enter a word: "; //asking the user for a word to check if it is a palindrome
	cin >> possible_palindrome;
	if(!palindrome(possible_palindrome))
		cout << endl << possible_palindrome <<" is not a palindrome." << endl;
	else
		cout << endl << possible_palindrome << " is a palindrome." << endl;
	cout << endl;

	stateDataMap["Nebraska"] = "Lincoln"; //adding in entries of states and capitals
	stateDataMap["New York"] = "Albany";
	stateDataMap["Ohio"] = "Columbus";
	stateDataMap["California"] = "Sacramento";
	stateDataMap["Massachusetts"] = "Boston";
	stateDataMap["Texas"] = "Austin";

	printMap(stateDataMap);

	stateDataMap["California"] = "Los Angeles"; //changing california's captial to los angeles

	
	
	cout << "Enter the state name: "; //getting user input for the state name
	cin.ignore();
	getline(cin, stateName);
	cout << endl;

	printCapital(stateDataMap, stateName); //printing out the capital for the user given state
}


void move_to_rear(queue<int>& queue1) // moves the first element to the rear
{
	int size = queue1.size();
	if (size > 1) //as long as the size of the queue is greater than 1, it will move the first element to the rear
	{
		int first = queue1.front();
		queue1.pop();
		queue1.push(first);
	}
	
	
}

void print_queue(queue<int> queue1) //prints the queue
{
	while (queue1.empty() == false) //while the quque is not empty, it will be printed
	{
		cout << " " << queue1.front();
		queue1.pop(); //removing parts of the queue as they're being outputted
	}
}

bool palindrome(string possible_palindrome) //recursive function which returns true or false depending on if the given word is a palindrome
{
	int size = possible_palindrome.length();

	if (size < 2)
	{
		return true;
	}

	else if (possible_palindrome[0] == possible_palindrome[size - 1]) //checks if a letter from the word backwards matches it forward
	{
		return palindrome(possible_palindrome.substr(1, size - 2)); //recursion here
	}
	return false;
}
	
void printCapital(map<string, string> stateDataMap, string stateName) //prints out the capital based on the user input
{
	map<string, string>::iterator iterate = stateDataMap.find(stateName);

	if (iterate != stateDataMap.end()) 
	{
		cout << "The Capital is " << iterate->second << endl;	//outputs the second stored value as the Capital of the given state
	}
	else 
	{
		cout << stateName << " is not an option" << endl;
	}
}

void printMap(map<string, string> stateDataMap) //prints out the states and locations in (State, Capital) format
{
	cout << "(State, Capital): " << endl;

	for (map<string, string>::iterator iterate = stateDataMap.begin(); iterate != stateDataMap.end(); iterate++)//iterator keeps going until the end of the map is reached
	{
		cout << "(" << iterate->first << ", " << iterate->second << ") " << endl; //outputs the first and second stored values as the state and capital
	}
	cout << endl;
}