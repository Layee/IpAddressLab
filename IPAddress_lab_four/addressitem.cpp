#include<iostream>
#include<string>
#include "AddressItem.h"
using namespace std;



AddressItem::AddressItem()
{
	count = 1;
}

void AddressItem::Tally() {
	count++;
}

std::string AddressItem::getAddress() {
	return address;
}


int AddressItem::getCount(){
	return count;
}


bool AddressItem::operator==(AddressItem & addr2) {

	return (address == addr2.getAddress());
}


//void AddressItem::setAddress(string newEntry) {
//	address = newEntry;
//}




