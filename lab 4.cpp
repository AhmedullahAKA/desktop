#include <iostream>
using namespace std;

class Node
{
public:
	int Info;
	Node *next, *prev;
	Node(int el, Node *n = NULL, Node *p = NULL)
	{
		Info = el;
		next = n;
		prev = p;
	}
};

class DoublyLinkedList
{
private:
	Node *head, *tail;
	int Size;

public:
	DoublyLinkedList()
	{
		head = tail = NULL;
		Size = 0;
	}

//	~DoublyLinkedList();
		
	void addToHead(int);
	int deleteFromHead();
	void deleteNode(int);	
    void showList();

};



void DoublyLinkedList::addToHead(int el)
{
	if(head != NULL)					//if list is not empty
	{
		head = new Node(el, NULL, head);
		head->prev->next = head;
	}

	else								//if list is empty
		tail = head = new Node(el);
	
	Size++;
}
void DoublyLinkedList::showList()
{
	Node *temp = head;
	int Number = Size;

	while(temp!= NULL)
	{
		cout<<"Node number : "<<Number<<" is: "<<temp->Info<<endl;
		temp = temp->next;
		Number++;
	}
}
int main(){


    cout<<"Ahmed ullah"<<endl;
    cout << "CMS ID : 59340"<<endl;
    //Node n;
    DoublyLinkedList dl;
    cout<<"Question 1"<<endl;
    int value;
    char op;
    cout<<"enter item value"<<endl;
    //cin>>n.el;
    int el;
    dl.addToHead(el);
    //dl.showList();
    cout<< 
    cout<<"add another node y/n";
    cin>>op;
    while (op == 'y'){
        cout<<"enter item value"<<endl;
    //cin>>value;
    dl.addToHead(el);
    dl.showList();
    cout<<"add another node y/n";
    cin>>op;

    }

  return 0;
}
