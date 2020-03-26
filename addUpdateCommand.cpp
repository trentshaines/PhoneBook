/**
	addUpdateCommand.cpp
	This class is responsible for implementing the addUpdateCommand class
	@author Trent Haines
**/

#include "addUpdateCommand.h"

addUpdateCommand::addUpdateCommand(phoneBook& collectionIn, std::istream& inStream, std::ostream& outStream) // constructor
	: bookCommand(inStream, outStream), collection(collectionIn)
{

}
void addUpdateCommand::execute()
{
	std::string Name = write("Enter name to add/update"); //asks the user for phonebook entry contents
	std::string Number = write("Enter phone number");
	std::string Address = write("Enter e-mail address");

	if (collection.find(Name)) // Determines if the entry is already found in the phonebook
	{
		display("Updating phone book entry for " + Name); // Lets the user know that the entry is being updated, as it is already in the phonebook
	}
	else
	{
		display("Adding phone book entry for " + Name); // Lets the user know that the entry is new and will be added
	}
	collection.insert(Name, Number, Address); // Adds/Updates the new entry
}