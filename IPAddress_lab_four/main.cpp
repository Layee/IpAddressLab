//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

#include <iostream>
#include <fstream>
#include <string>
#include "LinkedList.h" // ADT list operations
#include "AddressItem.h"
#include "Node.h"
#include "PrecondViolatedExcep.h"

void search(LinkedList<AddressItem>, AddressItem); // pass an object as referece and loop through it	and use the overload operator to compare ip
void print(LinkedList<AddressItem> myaddress);

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
			myfile >> myItem;
			mylist.insert(i, myItem);
			i++;
	}

	for (int i = 1; i <= mylist.getLength(); i++)
	{
		for (int j = i+1; j<= mylist.getLength(); j++)
		{
			if (mylist.getEntry(i).getAddress() == mylist.getEntry(j).getAddress())
			{
				mylist.remove(j);
				mylist.getEntry(i).Tally();
			    
			 }
		}
	}
	print(mylist);
	myfile.close();

	system("pause");
	return 0;
}


//void search(LinkedList<AddressItem> mylist, AddressItem myItem)
//{
//	int i = mylist.getLength();
//	while (i > 0) {
//		if (mylist.getEntry(i).getAddress() == myItem.getAddress())
//		{
//			mylist.getEntry(i).Tally();
//		}
//	}	
//	i--;
//}


void print(LinkedList<AddressItem> myaddress) {
	int i = myaddress.getLength();

	while (i > 0) {
		cout << myaddress.getEntry(i).getAddress() <<endl;
		cout << myaddress.getEntry(i).getCount() << endl;
		i--;
	}
}


