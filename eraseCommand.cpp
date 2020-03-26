/**
	eraseCommand.cpp
	This class is responsible for the implementation of the eraseCommand class
	@author Trent Haines
**/

#include "eraseCommand.h"

eraseCommand::eraseCommand(phoneBook& collectionIn, std::istream& inStream, std::ostream& outStream) //erasecommand constructure, empty
	: bookCommand(inStream, outStream), collection(collectionIn)
{

}
