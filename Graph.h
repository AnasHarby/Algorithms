#include <bits/stdc++.h>

#ifndef GRAPH_H_
#define GRAPH_H_

class Graph {
private:
	int N, E = 0;
	std::vector<std::pair<int, int> > *adj;
public:
	Graph(int N);
	void addEdgeUndirectedWeighted(int u, int v, int w);
	void addEdgeDirectedWeighted(int u, int v, int w);
	std::vector<int> dijkstra(int src);
	int dijkstra(int src, int dest);
	std::vector<int> bellmanFord(int src);
	std::vector<std::pair<int, int> > kruskal();
	std::vector<std::vector<int> > floydWarshall();
};

#endif /* GRAPH_H_ */
