/**
	phoneBookEntry.cpp
	This class is responsible for the implementation of the phoneBookEntry class
	@author Trent Haines
**/
#include "phoneBookEntry.h"


phoneBookEntry::phoneBookEntry() // default constructor implementation, intializes fields to an empty string
{
	Name = "";
	Number = "";
	Address = "";
}
phoneBookEntry::phoneBookEntry(const std::string& name, const std::string& number) // constructor implementation for an entry with a given name and number
{
	Name = name;
	Number = number;
	Address = "";
}
phoneBookEntry::phoneBookEntry(const std::string& name, const std::string& number, const std::string& email) // constructor implementation for an entry with all of its fields given
{
	Name = name;
	Number = number;
	Address = email;
}
phoneBookEntry::phoneBookEntry(const phoneBookEntry& from)
{
	Name = from.Name;
	Number = from.Number;
	Address = from.Address;
}
