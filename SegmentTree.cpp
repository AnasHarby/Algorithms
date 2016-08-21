#include "SegmentTree.h"
#include <bits/stdc++.h>

SegmentTree::SegmentTree(int *A, int n) {
	int x = (int) std::ceil(log2(n));
	M = new int[2 * (int) pow(2, x) - 1];
	this->n = n;
	this->A = A;
	segmentTreeUtil(0, 0, n - 1);
}

void SegmentTree::segmentTreeUtil(int node, int s, int e) {
	if (s == e)
		M[node] = s;
	else {
		segmentTreeUtil(2 * node + 1, s, (s + e) / 2);
		segmentTreeUtil(2 * node + 2, (s + e) / 2 + 1, e);
		A[M[node * 2 + 1]] <= A[M[node * 2 + 2]] ?
				M[node] = M[node * 2 + 1] : M[node] = M[node * 2 + 2];
	}
}

int SegmentTree::query(int s, int e) {
	if (s < 0 || e > n - 1 || s > e)
		return -1;
	return queryUtil(0, 0, n - 1, s, e);
}

int SegmentTree::queryUtil(int node, int sts, int ste, int s, int e) {
	if (s <= sts && e >= ste)
		return M[node];
	if (s > ste || e < sts)
		return INT_MAX;

	int p1 = queryUtil(node * 2 + 1, sts, (sts + ste) / 2, s, e);
	int p2 = queryUtil(node * 2 + 2, (sts + ste) / 2 + 1, ste, s, e);

	return std::min(p1, p2);
}

void SegmentTree::update(int ind, int val) {
	if (ind > n - 1 || ind < 0)
		return;
	return updateUtil(0, ind, val, 0, n - 1);
}

void SegmentTree::updateUtil(int node, int ind, int val, int sts, int ste) {
	if (ind < sts || ind > ste)
		return;
	if (sts == ste)
		A[ind] = val;
	else {
		updateUtil(node * 2 + 1, ind, val, sts, (sts + ste) / 2);
		updateUtil(node * 2 + 2, ind, val, (sts + ste) / 2 + 1, ste);
		A[M[node * 2 + 1]] <= A[M[node * 2 + 2]] ?
			M[node] = M[node * 2 + 1] : M[node] = M[node * 2 + 2];
	}
}
