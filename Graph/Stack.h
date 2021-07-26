#pragma once
#include<iostream>
using namespace std;
class Stack
{
private:
	int* stack;
	int max;
	int size;
public:
	Stack();
	Stack(int);
	~Stack();
	bool init(int);
	bool isEmpty();
	bool isFull();
	int top();
	int pop();
	void push(int);
};


