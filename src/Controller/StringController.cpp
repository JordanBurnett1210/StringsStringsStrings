/*
 * controller.cpp
 *
 *  Created on: Jan 25, 2016
 *      Author: jbur0473
 */

#include "StringController.h"
#include <iostream>
using namespace std;

StringController :: StringController()
{
	compString = "bloop";
	userInput = "notBloop";
	areEqual = false;
}

std::string StringController :: getUserInput()
{
	return this->userInput;
}
std::string StringController :: getCompString()
{
	return this->compString;
}
bool StringController :: getAreEqual()
{
	if(userInput.compare(compString) == 0)
	{
		areEqual = true;
	}
	else
	{
		areEqual = false;
	}
	return this->areEqual;
}

void StringController :: disIsEmpty()
{
	while(userInput.empty() == true)
	{
		cout << "The string is empty. Please put in a new string value." << endl;
		cin >> userInput;
	}
}

void StringController :: setUserInput()
{
	this->userInput = userInput;
}
void StringController :: setCompString()
{
	this->compString = compString;
}
void StringController :: setAreEqual()
{
	this->areEqual = areEqual;
}

void StringController :: start()
{
	cout << "Type something for string userInput." << endl;
	cin >> userInput;
	disIsEmpty();
	cout << "The length of your string is " + userInput.length() <<endl;
	std::string subStringOne;
	std::string subStringTwo;
	int startPoint;
	int endPoint;
	cout << "Declare an integer starting point for the substring." << endl;
	cin >> startPoint;
	cout << "The current substring is " + userInput.substr(startPoint) << endl;
	cout << "Declare an integer ending point for the substring." << endl;
	cin >> endPoint;
	cout << "The new substring is " + userInput.substr(startPoint, endPoint) << endl;
	cout << "The letter at position 3 is " + userInput.at(3) << endl;
	cout << "The letter at position 2 is " + userInput[2] << endl;

}

