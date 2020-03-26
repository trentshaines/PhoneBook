/**
	phoneBookEntry.h
	This class is responsible for managing phone book entries, which can be assigned to phone books.
	@author Trent Haines
*/

#ifndef PHONEBOOKENTRY_H_
#define PHONEBOOKENTRY_H_
#pragma once
#include <iostream>
#include <stdio.h>
#include <string>


class phoneBookEntry
{
private:
	std::string Name;	// the instance fields of phonebook entry objects
	std::string Number;
	std::string Address;
public:
	phoneBookEntry(); // overloaded constructors for phonebook entries
	phoneBookEntry(const std::string& name, const std::string& number);
	phoneBookEntry(const std::string& name, const std::string& number, const std::string& email);
	phoneBookEntry(const phoneBookEntry& from); // copy constructor for phonebook entries
	std::string name() const // accessor functions
	{
		return Name;
	}
	std::string phoneNumber() const
	{
		return Number;
	}
	std::string email() const
	{
		return Address;
	}
	void phoneNumber(const std::string& newNumber) // mutator functions
	{
		Number = newNumber;
	}
	void email(const std::string& newEmail)
	{
		Address = newEmail;
	}
};

#endif //PHONEBOOKENTRY_H_