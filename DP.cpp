#include <bits/stdc++.h>


int lcs(std::string x, std::string y, int n, int m) {
	if (m == 0 || n == 0)
		return 0;
	if (x[n - 1] == y[m - 1])
		return 1 + lcs(x, y, n - 1, m - 1);
	else
		return std::max(lcs(x, y, n, m - 1), lcs(x, y, n - 1, m));
}
