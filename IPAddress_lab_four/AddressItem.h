#pragma once

#include<iostream>
using namespace std;

class AddressItem
{

private:
	 string address;
	int count;

public:
																											 
	AddressItem();
	void Tally(); //  one to address item’s count
	 string getAddress();
	//void setAddress(string newEntry);
	int getCount();
	bool operator==(AddressItem & addr2); //compare address values only

	friend istream& operator >> (istream &ins, AddressItem &a) {
		//inputs one ip address into a
		ins >> a.address;
		return ins;
	}


	friend std::ostream& operator<<(ostream &outs, AddressItem &a) {
		outs << a.getAddress() << endl;
		outs << a.getCount() << endl;
		return outs;
		// outputs ip and count
	}

};


#include "AddressItem.cpp"