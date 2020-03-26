/**
	bookCommand.h
	This class is a subclass of command and the baseclass for addUpdateCommand, printCommand, and eraseCommand
	bookCommand implements various functions pertaining to phonebooks which are later implemented further for specific purposes
	@author Trent Haines
*/

#ifndef BOOKCOMMAND_H_
#define BOOKCOMMAND_H_

#include <stdio.h>
#include <iostream>
#include "command.h"

#pragma once

class bookCommand : public command // implements command class
{
protected:
	std::istream& in;  	//  members isteam and ostream are protected functions, accessible through implementation
	std::ostream& out;
	void display(const std::string word); 	// this function outputs to the console using ostream
	std::string write(const std::string word);	// this function inputs strings using istream
public:
	bookCommand(std::istream& inStream, std::ostream& outStream); // constructor for a bookcommand object
};



#endif //BOOKCOMMAND_H_