#include "MaxHeap.h"
#include "Queue.h"
#include "DynamicArray.h"
#include <iostream>

using namespace std;

int main() {
	Queue<int> q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	q.print();
	int a = q.pop();
	cout << "Popped: " << a << endl << "Queue: " << endl;
	q.print();
	a = q.pop();
	cout << "Popped: " << a << endl << "Queue: " << endl;
	q.print();
}