/**
	phoneBook.cpp
	This class is responsible for the implementation of the phoneBook class
	@author Trent Haines
**/

#include <iomanip>
#include "phoneBook.h"

phoneBook::phoneBook() //default constructor
{
}
//implementation of insert functions
void phoneBook::insert(const phoneBookEntry& entry) //inserts or updates a phonebookentry into the phonebook
{

	// determines if the entry is already in the vector
	bool flag = false;
	for (unsigned int i = 0;i < collection.size();i++) // loops through the vector to find the object that is already entered
	{
		if (collection.at(i).name() == entry.name()) // checks if each entry matches the given name
		{
			collection.at(i).phoneNumber(entry.phoneNumber()); // updates the contents of the vector
			collection.at(i).email(entry.email());
			flag =true;
		}
	}
	if(!flag)
	{
	 	collection.push_back(entry); // if the entry was not found in the vector, it gets added to the end of it
	}
}
void phoneBook::insert(const std::string& name, const std::string& number, const std::string& email) // constructs a new phonebook entry and adds it to the vector
{
	bool flag = false;

	for (unsigned int i = 0;i < collection.size();i++) // loops through the vector to find the object that is already entered
	{
		if (collection.at(i).name() == name) // checks if each entry matches the given name
		{
			collection.at(i).phoneNumber(number); // updates the contents of the vector
			collection.at(i).email(email);
			flag = true;
		}
	}
	if(!flag)
	{
		collection.push_back(phoneBookEntry(name,number,email)); // if the entry was not already in the vector, it gets added to the end
	}
}
void phoneBook::insert(const std::string& name, const std::string& number) // constructs a new phonebook entry without an email and adds or updates it in the vector
{
	bool flag = false;
	for (unsigned int i = 0;i < collection.size();i++)// loops through the vector to find the object that is already entered
	{
		if (collection.at(i).name() == name) // checks if each entry matches the given name
		{
			flag = true;
			collection.at(i).phoneNumber(number); // updates the contents of the vector
		}
	}
	
	if(!flag)
	{
		collection.push_back(phoneBookEntry(name, number)); // if the entry was not already in the vector, it gets added to the end
	}
}
bool phoneBook::erase(std::string name) // implementation of the erase function
{
		for (unsigned int i = 0; i < collection.size();i++) // loops through the vector to find the specific index of the entr
		{
			if (collection.at(i).name() == name)
			{
				collection.erase(begin()+i); // removes the entry
				return true; // returns true, indicating that the entry was removed
			}
		}
	return false; // returns false if the entry was not found and thus not removed
}
bool phoneBook::find(std::string name) // implementation of the find function
{
	for (unsigned int i = 0; i < collection.size(); i++) // loops through the vector until an entry with a matching name is found, at which point it returns true
	{
		if (collection.at(i).name() == name)
			return true;
	}
	return false; // if it is not found, it returns false
}
void phoneBook::print() const
{
	std::cout << std::left; // prints the labels for the contents
	std::cout << std::setw(31) << "Name: ";
	std::cout << std::setw(16) << "Phone Number: ";
	std::cout << "E-Mail: " << std::endl;
	for (unsigned int i = 0;i < collection.size();i++) // loops through the vector and prints each entry's contents
	{

		std::cout <<std::setw(31)<< collection.at(i).name();
		std::cout << std::setw(16) << collection.at(i).phoneNumber();
		std::cout << collection.at(i).email() << std::endl;
	}
 }
void phoneBook::print(std::ostream& out) const
{
	out << std::left; // prints the labels for the contents
	out << std::setw(31) << "Name: ";
	out << std::setw(16) << "Phone Number: ";
	out << "E-Mail:" << std::endl;
	for (unsigned int i = 0;i < collection.size();i++) // loops through the vector and prints each entry's contents
	{
		
		out << std::setw(31) << collection.at(i).name();
		out << std::setw(16) << collection.at(i).phoneNumber();
		out << collection.at(i).email() << std::endl;
	}
}
void phoneBook::debug(std::ostream& out) const // implementation of debug
{
	for (unsigned int i = 0; i < collection.size(); i++) 
	{
		out << collection.at(i).name() << " " << collection.at(i).phoneNumber() << " " << collection.at(i).email() << std::endl;
	}
}
std::size_t phoneBook::size() const //implementation of size() function
{
	return collection.size(); 
}
phoneBook::iterator phoneBook::begin() //implementation of begin() function
{
	return collection.begin();
}
phoneBook::iterator phoneBook::end() // implementation of end() function
{
	return collection.end();
}
