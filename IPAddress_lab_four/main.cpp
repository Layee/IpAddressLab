//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

#include <iostream>
#include <fstream>
#include <string>
#include "LinkedList.h" // ADT list operations
#include "AddressItem.h"
#include "Node.h"
#include "PrecondViolatedExcep.h"

void search(LinkedList<AddressItem>&, AddressItem &, int &); // pass an object as referece and loop through it	and use the overload operator to compare ip
void print(LinkedList<AddressItem>&myaddress);

int main() {

	AddressItem myItem;
	ifstream myfile;
	LinkedList<AddressItem> mylist;
	int i = 1;

	myfile.open("IpAddresses.txt");

	if (!myfile) {
		cout << " File not found" << endl;
	}

	while (!myfile.eof())
	{
		if (i == 1)
		{
			myfile >> myItem;
			mylist.insert(i, myItem);
		}
		else {
			myfile >> myItem;
			search(mylist, myItem, i);

		}
	}
	


	//myfile >> myItem1;
	//mylist.insert(i, myItem1);
	//i++;
	system("pause");
	return 0;
}


void search(LinkedList<AddressItem> & mylist, AddressItem & myItem, int & i)

{
	if (mylist.getEntry(i).getAddress() == myItem.getAddress())
	{
		mylist.getEntry(i).Tally();
	}
	i++;
}


void print(LinkedList<AddressItem>&myaddress) {
}