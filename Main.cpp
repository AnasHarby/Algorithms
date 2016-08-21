#include <bits/stdc++.h>
#include "SegmentTree.h"
using namespace std;

int main() {
	int A[] = {2, 5, 1, 4, 9, 3};
	SegmentTree st(A, 6);
	cout << st.query(0, 5) << endl;
	st.update(5, 0);
	cout << st.query(0, 5) << endl;

}
