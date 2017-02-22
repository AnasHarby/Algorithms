#ifndef DISJOINTSET_H_
#define DISJOINTSET_H_

class disjoint_set {
public:
	int *parent, N, connected_comps;
	disjoint_set(int N);
	int find_parent(int v);
	void merge_vertices(int u, int v);
};

#endif /* DISJOINTSET_H_ */
