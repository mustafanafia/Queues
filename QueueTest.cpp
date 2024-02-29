
#include <string>
#include <iostream>
#include "Queue.hpp"
using namespace std;


int main() {

	typedef Queue<int> IntegerQueue;

	IntegerQueue q1;



	typedef Queue<string> TextQueue;

	TextQueue q2;


	int x0 = 1;
	int x1 = 2;
	int x2 = 3;
	int x3 = 7;


	cout << "Adding to the queue...";

	q1.enqueue(x0);
	q1.enqueue(x1);
	q1.enqueue(x2);

	cout << "The queue is now: " << endl;


	q1.dequeue(x2);

	cout << "The queue after removing 2 now: " << endl;


	q1.replaceFront(x3);

	cout << "Replacing the front element with 7 " << endl;


	cout << "The first element is: " <<q1.front()<< endl;

	cout << "The queue length is: " <<q1.length() endl;

 }

