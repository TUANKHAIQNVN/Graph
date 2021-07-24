#pragma once
#include<iostream>
#include<vector>
#include<fstream>
#include"Queue.h"
using namespace std;

class Graph
{
private:
	int vertex;
	vector<int>* adj;
public:
	Graph();
	Graph(int);
	~Graph();
	void getEdge(int, int);

	//BFS breadth first search
	void breadth_first_search(int); 

	friend ofstream& operator <<(ostream& out, const Graph& src);
};

