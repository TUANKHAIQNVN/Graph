#pragma once
#include<iostream>
using namespace std;

class Queue
{
private:
	int *queue;
	int max;
	int size;
public:
	Queue();
	Queue(int);
	~Queue();
	bool init(int);
	bool isEmpty();
	bool isFull();
	int top();
	int pop();
	void push(int);
};

