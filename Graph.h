#include <bits/stdc++.h>

#ifndef GRAPH_H_
#define GRAPH_H_

class Graph {
private:
	int N;
	std::vector<std::pair<int, int> > *adj;
public:
	Graph(int N);
	void addEdgeUndirectedWeighted(int u, int v, int w);
	std::vector<int> dijkstra(int src);
	int dijkstra(int src, int dest);
};

#endif /* GRAPH_H_ */
