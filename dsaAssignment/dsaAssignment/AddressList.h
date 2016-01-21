#include<string>
#include<iostream>
using namespace std;

typedef string ItemType;

class AddressList
{
private:
	struct Node
	{
		ItemType item;	
		Node     *next;	
	};

	Node *firstNode;	
	int  size;		

public:

	// constructor
	AddressList();

	bool AddressList::add(ItemType newAddress);
	bool AddressList::add(int index, ItemType newAddress);
	void AddressList::remove(int index);
	void AddressList::display();
	void AddressList::replace(int index, ItemType address);
	ItemType AddressList::get(int index);
	bool AddressList::isEmpty();
	int AddressList::getLength();
};
