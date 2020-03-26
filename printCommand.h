/**
	printCommand.h
	This class implements the bookCommand class.
	This class is responsible for the print command of the phonebook, which outputs the contents of the phonebook
	@author Trent Haines
**/

#ifndef PRINTCOMMAND_H_
#define PRINTCOMMAND_H_

#include <stdio.h>
#include "bookCommand.h"
#include "phoneBook.h"

class printCommand : public bookCommand
{
private:
	phoneBook& collection; //the printCommand contains the address to a phonebook
public:
	printCommand(phoneBook& collectionIn, std::istream& inStream, std::ostream& outStream); // constructor for the print command
	virtual void execute() override; // overrides the execute method from the command class
};

#endif //PRINTCOMMAND_H_