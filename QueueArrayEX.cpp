#include <iostream>

using namespace std;

struct Node
{
	int data;	
};

const int MAX_SIZE = 5;

class QueueArr
{
	public:
		QueueArr();
		bool isEmpty();
		bool isFull();
		bool enqueue(int value);
		bool dequeue();
		int peek();

	private:
		int frontIndex;
		int backIndex;
		Node myarray[MAX_SIZE];

};

QueueArr::QueueArr()
{
	frontIndex = -1;
	backIndex = -1;
	// for HW add something here, because of pointer... newNode??
}

bool QueueArr::isEmpty()
{
	// do it yourself
	// frontIndex == -1
	// backIndex == -1
}

bool QueueArr::isFull()
{
	// Full if 	frontIndex == backIndex
}

bool QueueArr::enqueue(int value)
{
	// border cases: queue full, queue empty, stuff in queue and need to wrap,stuff in queue +1
	// queue full - return false
	// queue empty - add it, return true
	// wrap - set to index 0, add value
	// simple - add 1, add value

	if (isFull())
	{
		// cout error message
		return false;
	}

	if (isEmpty())
	{
		frontIndex = 0;
		backIndex = 0;
		myarray[backIndex].data = value;	// using . operator because it's not a pointer
		return true;
	}

	backIndex++;
	if (backIndex > MAX_SIZE -1)
	{
		// wraps the thing
		backIndex = 0;
		myarray[backIndex].data = value;
		return true;
	}
	// last case

}

bool QueueArr::dequeue()
{
	// border cases: queue empty, something in queue and wrap, something in queue and just add 1

	if (isEmpty())
	{
		// cout error
		return false;
	}

	frontIndex++;

	if (frontIndex > (MAX_SIZE-1))
	{
		frontIndex = 0;
		return true;
	}
	// if frontIndex == backIndez...set both to -1
	
}

int main()
{
	return 0;
}