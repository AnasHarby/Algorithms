#include <bits/stdc++.h>
#include "Graph.h"
#define INF 0x3f3f3f3f

Graph::Graph(int N) {
	this->N = N;
	adj = new std::vector<std::pair<int, int> > [N];
}

void Graph::addEdgeUndirectedWeighted(int u, int v, int w) {
	adj[u].push_back(std::make_pair(v, w));
	adj[v].push_back(std::make_pair(u, w));
}

std::vector<int> Graph::dijkstra(int src) {
	std::priority_queue<std::pair<int, int> > pq;
	std::vector<int> dist(N, INF);

	pq.push(std::make_pair(0, src));
	dist[src] = 0;

	while (!pq.empty()) {
		int u = pq.top().second;
		pq.pop();

		for (int i = 0; i < adj[u].size(); i++) {
			int v = adj[u][i].first;
			int w = adj[u][i].second;

			if (dist[v] > dist[u] + w) {
				dist[v] = dist[u] + w;
				pq.push(std::make_pair(-1 * dist[v], v));
			}
		}
	}

	return dist;
}

int Graph::dijkstra(int src, int dest) {
	std::priority_queue<std::pair<int, int> > pq;
		std::vector<int> dist(N, INF);

		pq.push(std::make_pair(0, src));
		dist[src] = 0;

		while (!pq.empty()) {
			int u = pq.top().second;
			pq.pop();

			for (int i = 0; i < adj[u].size(); i++) {
				int v = adj[u][i].first;
				int w = adj[u][i].second;

				if (dist[v] > dist[u] + w) {
					dist[v] = dist[u] + w;
					pq.push(std::make_pair(-1 * dist[v], v));
				}
			}
		}

		return dist[dest];
}
