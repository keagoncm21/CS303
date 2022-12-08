#pragma once
#include <iostream>
#include <queue>
using namespace std;


void move_to_rear(queue<int>& queue1);
//pre: takes a queue as input
//post: outputs the queue with the first element now in the back of the queue and each other element now being what was previously the element after.
void print_queue(queue<int> queue1);
//pre: takes a queue as input
//post: outputs the queue
bool palindrome(string possible_palindrome);
//pre: takes a string as input
//post: outputs true or false after recursion has taken place(if recursion has take place)
void printMap(map<string, string> stateDataMap);
//pre: takes a map of two strings as input
//post: outputs a printed set of states and capitals
void printCapital(map<string, string> stateDataMap, string stateName);
//pre: takes a map of two strings and a string for the state name
//post: outputs a capital of the state given