#include "DisjointSet.h"

DisjointSet::DisjointSet(int N) {
	this->N = N;
	parent = new int[N];
	connectedComponenets = N;
	for (int i = 0; i < N; i++)
		parent[i] = i;
}

int DisjointSet::findParent(int v) {
	if (parent[v] == v)
		return v;
	return parent[v] = findParent(parent[v]);
}

void DisjointSet::mergeVertices(int u, int v) {
	int parentU = findParent(u);
	int parentV = findParent(v);
	if (parentU == parentV)
		return;
	parent[parentV] = parentU;
	connectedComponenets--;
}

