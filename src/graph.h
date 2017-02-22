#include <bits/stdc++.h>

#ifndef GRAPH_H_
#define GRAPH_H_

class graph {
private:
	int N, E = 0;
	std::vector<std::pair<int, int> > *adj;
public:
	graph(int N);
	void add_undirected_weighted_edge(int u, int v, int w);
	void add_directed_weighted_edge(int u, int v, int w);
	std::vector<int> dijkstra(int src);
	int dijkstra(int src, int dest);
	std::vector<int> bellman_ford(int src);
	std::vector<std::pair<int, int> > kruskal();
	std::vector<std::vector<int> > floyd_warshall();
};

#endif /* GRAPH_H_ */
