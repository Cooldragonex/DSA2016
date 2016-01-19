#include "stdafx.h"
#include <iostream>
using namespace std; 

class Person
{
public:
	Person(string n, string b, string d, string occ, string addr)
	{
		name = n;
		birth = b;
		death = d;
		occupation = occ;
		address = addr;

	};

	string getName()
	{
		return name;
	}
	void setName(string n)
	{
		name = n;
	}
	string getBirth()
	{
		return birth;
	}
	void setBirth(string b)
	{
		birth = b;
	}string getDeath()
	{
		return death;
	}
	void setDeath(string d)
	{
		death = d;
	}string getOccupation()
	{
		return occupation;
	}
	void setOccupation(string occ)
	{
		occupation = occ;
	}
	string getAddr()
	{
		return address;
	}
	void setAddr(string addr)
	{
		address = addr;
	}

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




