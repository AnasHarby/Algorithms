#ifndef DISJOINTSET_H_
#define DISJOINTSET_H_

class DisjointSet {
public:
	int *parent, N, connectedComponenets;
	DisjointSet(int N);
	int findParent(int v);
	void mergeVertices(int u, int v);
};

#endif /* DISJOINTSET_H_ */
