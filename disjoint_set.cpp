#include "disjoint_set.h"

disjoint_set::disjoint_set(int N) {
	this->N = N;
	parent = new int[N];
	connected_comps = N;
	for (int i = 0; i < N; i++)
		parent[i] = i;
}

int disjoint_set::find_parent(int v) {
	if (parent[v] == v)
		return v;
	return parent[v] = find_parent(parent[v]);
}

void disjoint_set::merge_vertices(int u, int v) {
	int parent_u = find_parent(u);
	int parent_v = find_parent(v);
	if (parent_u == parent_v)
		return;
	parent[parent_v] = parent_u;
	connected_comps--;
}

