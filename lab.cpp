#include <iostream>
using namespace std;

class node{
    
    private:
	node *head, *tail;
	int Size;

    public :
    int info;
    node* next;

    node(int el, node *ptr = NULL)
	{
		info = el;
		next = ptr;
	}

    void addToTail(int);

	int deleteFromTail();
	void deleteNode(int);
};
void node::addToTail(int el)
{
	if(tail != NULL)					//if list is not empty
	{
		tail->next = new IntNode(el);
		tail = tail->next;
	}

	else head = tail = new IntNode(el); //if list is empty

	Size++;
}

int main()
{
	node nd;

	//List.addToHead(7);
	nd.addToTail(3);
	nd.addToTail(4);
	//List.addToHead(9);

	//List.showList();
}


