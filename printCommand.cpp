/**
	printCommand.cpp
	This class is responsible for the implementation of the print command class
	@author Trent Haines
**/

#include "printCommand.h"

printCommand::printCommand(phoneBook& collectionIn, std::istream& inStream, std::ostream& outStream) // constrcutor implementation, empty
	: bookCommand(inStream, outStream), collection(collectionIn)
{

}
void printCommand::execute() // override of the command execute function
{
	collection.print(out); // uses the phoneBook print function
}