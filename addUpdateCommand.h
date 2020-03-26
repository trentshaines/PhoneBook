/**
	addUpdateCommand.h
	This class is responsible for addding/updating command of the phonebook.
	It prompts the user to input data and the deals with adding it to the phonebook
	@author Trent Haines
**/

#ifndef ADDUPDATECOMMAND_H_
#define ADDUPDATECOMMAND_H_

#include <stdio.h>
#include "bookCommand.h"
#include "phoneBook.h"

class addUpdateCommand : public bookCommand
{
private:
	phoneBook &collection; //the add update command contains a reference to the phonebook
public:
	addUpdateCommand(phoneBook& bookIn, std::istream& inStream, std::ostream& outStream); // constructor for add update command
	virtual void execute() override;
	// overrides the command's execute function
};

#endif //ADDUPDATECOMMAND_H_