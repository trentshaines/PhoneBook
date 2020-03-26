/**
	bookCommand.h
	This class implements the bookCommand class
	@author Trent Haines
*/

#include <iostream>
#include <string>
#include "bookCommand.h"

bookCommand::bookCommand(std::istream& inStream, std::ostream& outStream) // implements the constructor
	:in(inStream), out(outStream) 
{

}
void bookCommand::display(const std::string s) // implementation of the display function
{
	out << s << std::endl; // outputs the given string
}
std::string bookCommand::write(const std::string s) // implementation of the write functoin
{
	std::string input; 
	
	out << s << std::endl;
	std::getline(in, input); // allows user to input a string and then returns the given input
	return input;
}