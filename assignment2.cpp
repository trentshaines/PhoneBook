/**
	assignment2.cpp
	This class is the main class for the phonebook project
	@author Trent Haines
**/

#include "phoneBook.h"
#include "addUpdateCommand.h"
#include "eraseCommand.h"
#include "printCommand.h"
#include "menuList.h"
#include "bookCommand.h"
#include <string>
#include <stdio.h>
#include <iostream>

int main()
{

	// initializing of variables for the command (add,erase,print)
	std::istream& in = std::cin;
	std::ostream& out = std::cout;
	phoneBook collection1;

	//creating the objects for the various commands
	addUpdateCommand add(collection1, in, out);
	eraseCommand erase(collection1, in, out);
	printCommand print(collection1, in, out);

	//create the menuList
	menuList menu("Phone book menu:");

	//create the menu entries with the commands and the keys for them, and add the menu Items to the list
	menuItem addItem('a', "add/update", add);
	menu.add(addItem);
	menuItem eraseItem('e', "erase", erase);
	menu.add(eraseItem);
	menuItem printItem('p', "print", print);
	menu.add(printItem);

	//output the message for starting the phone book and start it
	std::cout << "Starting the Phone Book" << std::endl << std::endl;
	menu.start();
	
	return 0;
}