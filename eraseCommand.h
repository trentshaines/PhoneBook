/**
	eraseCommand.h
	This class inherits the bookCommand class.
	This class is responsible for the erase command of the phonebook, which outputs the contents of the phonebook
	@author Trent Haines
**/

#ifndef ERASECOMMAND_H_
#define ERASECOMMAND_H_

#include <stdio.h>
#include "phoneBook.h"
#include "bookCommand.h"

class eraseCommand : public bookCommand
{
private:
	phoneBook &collection; // the class contains an address to the phonebook
public:
	eraseCommand(phoneBook& collectionIn, std::istream& inStream, std::ostream& outStream);
	virtual void execute() override
	{
		std::string Name = write("Enter name to erase"); // prompts the user for the name of the entry to be erased
		if (collection.find(Name))
		{
			collection.erase(Name);
			display("Phone book entry " + Name + " was erased"); // updates user that the entry was found and erases it
		}
		else
		{
			display("Phone book entry " + Name + " was not erased"); // the entry is not found, updates user that it wasnt erased
		}
	}
};

#endif //ERASECOMMAND_H_