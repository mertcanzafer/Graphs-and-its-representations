#include <iostream>
#include <vector>
using namespace std;
 // Implementation of Adjacency Matrix
 
const int edges{ 7 }, vertices{ 5 }; // Number of edges and vertices

void ShowAdjacencyMatrix(const int adjMat[edges][vertices])
{
	for (int i = 0; i < vertices; i++)
	{
		for (int j = 0; j < vertices; j++)
			cout << adjMat[i][j] << " ";
		cout << endl;
	}
}

void Addedges(vector<int> adjList[]) {
	int u{ 0 }, v{ 0 };

	for (int i = 0; i < edges; i++)
	{
		cin >> u >> v;
		adjList[u].push_back(v);
		adjList[v].push_back(u);
	}

}

void printGraph(vector<int> adjList[])
{
	for (int i = 0; i < vertices; i++)
	{
		cout << "\n Adjacency list of vertex " << i << "\n head ";

		for (auto& x : adjList[i])
			cout << "-> " << x;
		cout << endl;
	}
}

  int main()
{

	  int adjMat[vertices][vertices] =
	  {
		  {0,0,0,0,0},
		  {0,0,0,0,0},
		  {0,0,0,0,0},
		  {0,0,0,0,0},
		  {0,0,0,0,0},
	  };

	int u{0},v{0};

	for (int i = 0; i < edges; i++)
	{
		cin >> u >> v; // vertex u and v...
	    
		adjMat[u][v] = 1;
		adjMat[v][u] = 1;
	}

	ShowAdjacencyMatrix(adjMat);

	// Implementation Adjacency List Representation

	vector<int> adjList[vertices];
	Addedges(adjList);
	printGraph(adjList);

	return 0;
}
