#include <bits/stdc++.h>
#include "Graph.h"
#define INF 0x3f3f3f3f
using namespace std;

int main() {
	Graph g(9);
	g.addEdgeUndirectedWeighted(0, 1, 4);
	g.addEdgeUndirectedWeighted(0, 7, 8);
	g.addEdgeUndirectedWeighted(1, 2, 8);
	g.addEdgeUndirectedWeighted(1, 7, 11);
	g.addEdgeUndirectedWeighted(2, 3, 7);
	g.addEdgeUndirectedWeighted(2, 8, 2);
	g.addEdgeUndirectedWeighted(2, 5, 4);
	g.addEdgeUndirectedWeighted(3, 4, 9);
	g.addEdgeUndirectedWeighted(3, 5, 14);
	g.addEdgeUndirectedWeighted(4, 5, 10);
	g.addEdgeUndirectedWeighted(5, 6, 2);
	g.addEdgeUndirectedWeighted(6, 7, 1);
	g.addEdgeUndirectedWeighted(6, 8, 6);
	g.addEdgeUndirectedWeighted(7, 8, 7);
	vector<vector<int> > res = g.floydWarshall();
	for (unsigned i = 0; i < res.size(); i++) {
		for (unsigned j = 0; j < res[i].size(); j++)
			res[i][j] == INF ? cout << "INF" << " " : cout << res[i][j] << " ";
		cout << endl;
	}
}
