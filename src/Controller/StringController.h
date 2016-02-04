/*
 * stringController.h
 *
 *  Created on: Jan 25, 2016
 *      Author: jbur0473
 */

#ifndef CONTROLLER_STRINGCONTROLLER_H_
#define CONTROLLER_STRINGCONTROLLER_H_
#include <string>

class StringController
{
private:
	std::string userInput;
	std::string compString;
	bool areEqual;
public:
	StringController();
	void disIsEmpty();
	bool getAreEqual();
	void setAreEqual();
	std::string getUserInput();
	void setUserInput();
	std::string getCompString();
	void setCompString();
	void start();
};



#endif /* CONTROLLER_STRINGCONTROLLER_H_ */
