#include "Stack.h"


Stack::Stack() {
	this->stack = NULL;
	this->max = this->size = 0;
}
Stack::Stack(int max_in) {
	this->max = max_in;
	this->stack = new int[max_in];
	this->size = 0;
}
Stack::~Stack() {
	this->max = 0;
	int del = 0;
	while (!isEmpty())
		del = pop();
	delete[] this->stack;
	this->size = 0;
}

bool Stack::init(int max_in) {
	this->max = max_in;
	this->stack = new int[max_in];
	this->size = 0;
	return true;
}
bool Stack::isEmpty() {
	return 0 == this->size;
}
bool Stack::isFull() {
	return this->max == this->size;
}
int Stack::top() {
	return this->stack[this->size-1];
}
int Stack::pop() {
	int temp = this->stack[this->size-1];
	this->stack[this->size - 1] = INT_MIN;
	this->size--;
	return temp;
}
void Stack::push(int item) {
	if (!isFull()) {
		this->stack[this->size++] = item;
	}
	else cout << "FULL" << endl;
}