/**
	phoneBook.h
	This class is responsible for managing phonebook entries
	@author Trent Haines
*/

#ifndef PHONEBOOK_H_
#define PHONEBOOK_H_

#include <iostream>
#include <vector>
#include <stdio.h>
#include <string>
#include "phoneBookEntry.h"

class phoneBook
{
private:
	std::vector<phoneBookEntry> collection; //Instance field of the phonebook class, a vector that contains phonebook entries
public:
	phoneBook(); //default constructor for phonebooks
	void insert(const phoneBookEntry& entry); //overloaded methods for the insert function, which adds or updates a phonebook entry to a phonebook
	void insert(const std::string& name, const std::string& number, const std::string& email);
	void insert(const std::string& name, const std::string& number);
	bool erase(std::string name); //removes an entry fro the phonebook
	bool find(std::string name); //determines if an entry is inside of the phonebook
	void print() const; // overloaded print functions, output the contents of the phonebook
	void print(std::ostream& out) const;
	void debug(std::ostream& out) const; // helps to debug the code, prints the contents of the every member of phonebook 
	std::size_t size() const; // returns the size of the phonebook (the amount of entries stored)
	typedef std::vector<phoneBookEntry> phoneBookEntryList; //type definitions, allow for easier tping
	typedef phoneBookEntryList::iterator iterator;
	typedef phoneBookEntryList::const_iterator const_iterator;
	iterator begin(); //iterator functions, return the iterator for the phonebook vector
	iterator end();
};

#endif //PHONEBOOK_H_