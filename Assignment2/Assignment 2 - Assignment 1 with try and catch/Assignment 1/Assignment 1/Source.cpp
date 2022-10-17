//Keagon Madison
//Class: CS303 UMKC
//Last accessed: 9/16/2022

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include "Header.h"

using namespace std;

int main()
{
    //vector/array is defined along with the variable 'option'
	vector<int> nums;
	readFile(nums); //reading in the file
    char option = choice();

    while (option != 'Q')
    {
        
        switch (option) //depending on what the user inputs will decide what get's returned or if the user has to re-enter another input
        {
        case 'C':
            returnIndex(nums);
            break;
        case 'M':
            modifyInt(nums);
            break;
        case 'A':
            addInt(nums);
            break;
        case 'R':
            removeIndex(nums);
            break;
        case 'Q':
            option = 'Q';
            break;
        default:
            continue;
        }
        option = choice();
    }

}
