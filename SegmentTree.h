#ifndef SEGMENTTREE_H_
#define SEGMENTTREE_H_

class SegmentTree {
	public:
		SegmentTree(int A[], int n);
		int query(int s, int e);
		int *M;

	private:
		int *A,  n;
		void segmentTreeUtil(int node, int A[], int s, int e);
		int queryUtil(int node, int s, int e, int sts, int ste);
};

#endif /* SEGMENTTREE_H_ */
