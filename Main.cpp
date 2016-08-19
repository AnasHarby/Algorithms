#include <bits/stdc++.h>

#include "SegmentTree.h"
using namespace std;

int main() {
	int A[] = {1, 3, 2, 7, 9, 11};
	SegmentTree st(A, 6);
	cout << st.query(5, 5);
}
