#include "stdafx.h"
#include <iostream>
using namespace std; 

class Person
{
public:
	Person() {};
	Person(string name, string birth, string death, string occupation, string address);
	string setName();
	string getName();

	string setBirth();
	string getBirth();

	string setDeath();
	string setDeath();

	string setDeath();
	string getDeath();

	string setOccupation();
	string getOccupation();

	string setAddress();
	string getAddress();

private:
	string name;
	string birth;
	string death;
	string occupation;
	string address;

};

struct Node
{
	Person p;
	Node *child1, *child2, *spouse, *parent;
};




