#include <iostream>
using namespace std;

class IntNode
{
public:
	int Info;
	IntNode* next;
	
	IntNode(int el, IntNode *ptr = NULL)
	{
		Info = el;
		next = ptr;
	}
};

class IntSLList
{
private:
	IntNode *head, *tail;
	int Size;

public:
	IntSLList()
	{
		head = tail = NULL;
		Size = 0;
	}

	//~IntSLList();

	int isEmpty()
	{
		return (head == NULL);		
	}

	void addToHead(int);
	
	void showList();

	int LSize()
	{
		return Size;
	}
};
