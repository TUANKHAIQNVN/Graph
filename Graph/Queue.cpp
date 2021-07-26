#include "Queue.h"

Queue::Queue() {
	this->queue = NULL;
	this->max = this->size = 0;
}
Queue::Queue(int max_in) {
	this->max = max_in;
	this->queue = new int[max_in];
	this->size = 0;
}
Queue::~Queue() {
	this->max = 0;
	delete[] this->queue;
	this->size = 0;
}

bool Queue::init(int max_in) {
	this->max = max_in;
	this->queue = new int[max_in];
	this->size = 0;
	return true;
}
bool Queue::isEmpty() {
	return 0 == this->size;
}
bool Queue::isFull() {
	return this->max == this->size;
}
int Queue::top() {
	return this->queue[0];
}
int Queue::pop() {
	int temp = this->queue[0];
	for (int i = 0; i < this->size - 1; i++)
		this->queue[i] = this->queue[i + 1];
	this->size--;
	return temp;
}
void Queue::push(int item) {
	if (!isFull()) {
		this->queue[this->size++] = item;
	}
	else cout << "FULL" << endl;
}