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
	void showList();

};
void node::addToTail(int el)
{
	if(tail != NULL)					//if list is not empty
	{
		tail->next = new node(el);
		tail = tail->next;
	}

	else head = tail = new node(el); //if list is empty

	Size++;
}

void node::showList()
{
	node *temp = head;
	int Number = Size;

	while(temp!= NULL)
	{
		cout<<"Node number : "<<Number<<" is: "<<temp->info<<endl;
		temp = temp->next;
		Number--;
	}
}
int node::deleteFromTail()
{
	int el = tail->info;

	if(head == tail)					//if only one node in the list
	{
		delete head;
		head = tail = NULL;
	}
	else
	{
		node *temp = head;
		
		while(temp->next != tail)		//reach the second last node
			temp = temp->next;
		
		delete tail;
		tail = temp;
		tail->next = NULL;	
	}

	Size--;

	return el;
}
int main()
{
	

	node nd;
	char option = 'y';
	while(option != 'n'){
		cout << "Enter Item Value: " <<  endl;
		
	}
	nd.addToTail(3);
	nd.showList();
	nd.deleteFromTail();
	nd.showList();
	
}


