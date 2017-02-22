#ifndef SEGMENTTREE_H_
#define SEGMENTTREE_H_

class segment_tree {
	public:
		segment_tree(int A[], int n);
		int query(int s, int e);
		void update(int ind, int val);
		int *M;

	private:
		int *A,  n;
		void segment_tree_util(int node, int s, int e);
		int query_util(int node, int s, int e, int sts, int ste);
		void update_util(int node, int ind, int val, int sts, int ste);
};

#endif /* SEGMENTTREE_H_ */
