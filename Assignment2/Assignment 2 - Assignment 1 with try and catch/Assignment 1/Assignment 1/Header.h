#pragma once
#include <iostream>
#include <vector>
using namespace std;


void readFile(vector<int>&);
//pre: takes a vector of integers
//post: reads in a file and adds the integers to the vector
void returnIndex(vector<int>&);
//pre: takes a vector of integers
//post: ouputs the index of a number the user specifies
void modifyInt(vector<int>&);
//pre: takes a vector of integers
//post: changes an integer to a new user given integer
void addInt(vector<int>&);
//pre: takes a vector of integers
//post: adds a new integer to the vector
void removeIndex(vector<int>&);
//pre: takes a vector of integers
//post: removes a user given index from the vector
char choice();
//pre: none
//post: oupputs a character that is equal to the user's choice of options