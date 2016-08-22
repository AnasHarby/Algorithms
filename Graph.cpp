#include <bits/stdc++.h>
#include "Graph.h"
#include "DisjointSet.h"
#define INF 0x3f3f3f3f

struct edge {
	int u, v, w;
};

bool comp(edge x, edge y) {
	return x.w < y.w;
}

Graph::Graph(int N) {
	this->N = N;
	adj = new std::vector<std::pair<int, int> > [N];
}

void Graph::addEdgeUndirectedWeighted(int u, int v, int w) {
	adj[u].push_back(std::make_pair(v, w));
	adj[v].push_back(std::make_pair(u, w));
}

void Graph::addEdgeDirectedWeighted(int u, int v, int w) {
	adj[u].push_back(std::make_pair(v, w));
}

std::vector<int> Graph::dijkstra(int src) {
	std::priority_queue<std::pair<int, int> > pq;
	std::vector<int> dist(N, INF);

	pq.push(std::make_pair(0, src));
	dist[src] = 0;

	while (!pq.empty()) {
		int u = pq.top().second;
		pq.pop();

		for (unsigned i = 0; i < adj[u].size(); i++) {
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

			for (unsigned i = 0; i < adj[u].size(); i++) {
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

std::vector<std::pair<int, int> > Graph::kruskal() {
	std::vector<std::pair<int, int> > res;
	std::vector<edge> edges;
	int c = 0;
	for (int i = 0; i < N; i++)
		for (unsigned j = 0; j < adj[i].size(); j++) {
			edges.push_back(edge());
			edges[c].u = i;
			edges[c].v = adj[i][j].first;
			edges[c].w = adj[i][j].second;
			c++;
		}

	sort(edges.begin(), edges.end(), comp);
	DisjointSet ds(N);
	for (int i = 0; i < c; i++) {
		int u = edges[i].u, v = edges[i].v;
		if (ds.findParent(u) != ds.findParent(v)) {
			ds.mergeVertices(u, v);
			res.push_back(std::make_pair(u, v));
		}
	}
	return res;
}

std::vector<std::vector<int> > Graph::floydWarshall() {
	std::vector<std::vector<int> > dist(N);

	for(int i = 0; i < N; i++)
		dist[i].resize(N, INF);

	for (int i = 0; i < N; i++) {
		dist[i][i] = 0;
		for (unsigned j = 0; j < adj[i].size(); j++)
			dist[i][adj[i][j].first] = adj[i][j].second;
	}

	for (int k = 0; k < N; k++)
		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++)
				if (dist[i][j] > dist[i][k] + dist[k][j])
					dist[i][j] = dist[i][k] + dist[k][j];

	return dist;
}
