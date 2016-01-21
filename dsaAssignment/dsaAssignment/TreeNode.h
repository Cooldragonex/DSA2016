// List.h - - Specification of List ADT (implemented using Pointers)
#include<string>
#include<iostream>
#include "Person.h"

using namespace std;

typedef string ItemType;

class List
{
   private:
	  struct Node
	  {
		  Person   *person;	// item
		  Node     *mother;	// pointer pointing to mother node
		  Node     *father; //pointing to father node
		  Node     *marriedTo; //points to person that this person is married to.
		  AddressList addr;
		  ChildrenList childList;
		  string name;
		  string birthDate;
		  string deathDate;
		  string NRIC;
	};