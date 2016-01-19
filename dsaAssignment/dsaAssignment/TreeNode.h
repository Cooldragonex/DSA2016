// List.h - - Specification of List ADT (implemented using Pointers)

#include<string>
#include<iostream>
using namespace std;

typedef string ItemType;

class TreeNode
{
private:
	struct Node
	{
		ItemType item;	
		Node     *next;	
	};

	Node *firstNode;	
	int  size;

