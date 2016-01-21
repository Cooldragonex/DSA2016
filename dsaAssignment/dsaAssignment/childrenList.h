#include<string>
#include<iostream>
using namespace std;

typedef string ItemType;

bool List::add(ItemType newItem)
{
	Node *childNode = new Node;
	newNode->item = newItem;
	newNode->next = NULL;

	if (firstNode == NULL)
	{
		firstNode = newNode;
	}
	else
	{
		Node *temp = firstNode;
		for (int i = 1; i <= size; i++)
		{
			temp = temp->next;
		}
		temp->next = newNode;
		size++;
		return true;