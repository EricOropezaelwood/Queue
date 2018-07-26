#include <iostream>

using namespace std;

struct Node
{
	int data;
	Node *next;	
};

class QueueLL
{
	public:
		QueueLL();
		// like deleting a linked list
		~QueueLL();
		bool isEmpty();
		bool enqueue(int value);
		bool dequeue();
		int peek();

	private:
		Node *front;
		Node *tail;

}

QueueLL::QueueLL()
{
	front = NULL;
	tail = NULL;
}

QueueLL::~QueueLL()
{
	// do myself
}

bool QueueLL::isEmpty()
{
	return (front == NULL);
}

bool QueueLL::enqueue(int value)
{
	Node *newNode = new Node;
	newNode -> data = value;
	newNode -> next = NULL;

	if(isEmpty())
	{
		front = newNode;
	}
	else
	{
		tail -> next = newNode;
	}
	tail = newNode;
	return true;
}

bool QueueLL:: dequeue()
{
	if(isEmpty())
	{
		return false;
	}

	Node *tmp = front;
	front = front -> next;
	delete tmp;
	return true;
}

int QueueLL::peek()
{
	if(!isEmpty())
	{
		return front -> data;
	}
	// if is empty
	return -1;
}


int main()
{
	QueueLL *qll = new QueueLL();
	qll -> enqueue(1);
	qll -> enqueue(2);
	qll -> enqueue(3);
	qll -> enqueue(4);

	cout << qll -> peek() << endl;
	qll -> dequeue();
	cout << qll -> peek() << endl;

	return 0;
}

// isFull()
// 	if tail + 1 = front
//	if tail + 1 = max #, then if front = 0