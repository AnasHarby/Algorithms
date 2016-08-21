#include <bits/stdc++.h>
#include "Graph.h"
using namespace std;

int main() {
	Graph g(4);
	g.addEdgeDirectedWeighted(0, 1, 10);
	g.addEdgeDirectedWeighted(0, 2, 6);
	g.addEdgeDirectedWeighted(0, 3, 5);
	g.addEdgeDirectedWeighted(1, 3, 15);
	g.addEdgeDirectedWeighted(2, 3, 4);
	vector<pair<int, int> > res = g.kruskal();
	for (unsigned i = 0; i < res.size(); i++)
		cout << res[i].first << " " << res[i].second << endl;
}
