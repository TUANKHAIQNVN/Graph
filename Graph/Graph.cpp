#include"Graph.h"

Graph::Graph() {
	vertex = 0;
	adj = NULL;
}

Graph::Graph(int change_vertex) {
	vertex = change_vertex;
	adj = new vector<int>[change_vertex];
}

Graph::~Graph() {
	vertex = 0;
	delete[] adj;
}

void Graph::getEdge(int vertex_u, int vertex_v) {
	adj[vertex_u].push_back(vertex_v);
	adj[vertex_v].push_back(vertex_u);
}

ofstream& operator <<(ostream& out, const Graph& src) {
	for (int vertex = 0; vertex < src.vertex; vertex++) {
		cout << "\n Adjacency list of vertex "
			<< vertex << "\n head ";
		for (auto x : src.adj[vertex])
			cout << "-> " << x;
		cout << endl;
	}
}

void Graph::breadth_first_search(int start_root){// prints BFS traversal from a given source s
	//init visted array
	bool* visited = new bool[this->vertex];
	for (int i = 0; i < this->vertex; i++)
		visited[i] = false;
	//init queue for BFS
	Queue queueBFS(this->vertex);
	
	//add start_root into queue and mark it to visited
	queueBFS.push(start_root);
	visited[start_root] = true;

	int visited_vertex = 0;
	vector<int>::iterator adjacent_vertices_of; //will be used to get all adjacent vertices of a vertex
	while (!queueBFS.isEmpty()) {
		visited_vertex = queueBFS.pop();
		cout << visited_vertex << " ";

		//Get all adjacent vertices of the dequeued vertex s
		for (adjacent_vertices_of = this->adj[visited_vertex].begin();
			adjacent_vertices_of != this->adj[visited_vertex].end();
			++adjacent_vertices_of) {

			if (!visited[*adjacent_vertices_of]) {
				queueBFS.push(*adjacent_vertices_of);
				visited[*adjacent_vertices_of] = true;
			}
		}
	}
}
