#ifndef SEGMENTTREE_H_
#define SEGMENTTREE_H_

class SegmentTree {
	public:
		SegmentTree(int A[], int n);
		int query(int s, int e);
		void update(int ind, int val);
		int *M;

	private:
		int *A,  n;
		void segmentTreeUtil(int node, int s, int e);
		int queryUtil(int node, int s, int e, int sts, int ste);
		void updateUtil(int node, int ind, int val, int sts, int ste);

};

#endif /* SEGMENTTREE_H_ */
