#pragma once
#include<iostream>
#include<vector>
#include<fstream>
#include"Queue.h"
#include"Stack.h"
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

	//BFS breadth first search --- tim kiem theo chieu rong
	void breadth_first_search(int); 

	//DFS depth first search --- tiem kiem theo chieu sau
	void depth_first_search(int);

	friend ofstream& operator <<(ofstream& out, const Graph& src);
};

