#include <bits/stdc++.h>

/*
 * Longest Common Subsequence.
 */
int lcs(std::string x, std::string y, int n, int m) {
	if (m == 0 || n == 0)
		return 0;
	if (x[n - 1] == y[m - 1])
		return 1 + lcs(x, y, n - 1, m - 1);
	else
		return std::max(lcs(x, y, n, m - 1), lcs(x, y, n - 1, m));
}

/*
 * Longest Increasing Subsequence.
 * O(n^2).
 */

int lis(int arr[], int n) {
	int dp_arr[n] = {1}, m = 0;
	for (int i = 1; i < n; i++)
		for (int j = 0; j < i; j++)
			if (arr[i] > arr[j] && dp_arr[i] < dp_arr[j] + 1)
				dp_arr[i] = dp_arr[j] + 1;
	for (int i = 0; i < n; i++)
		m = std::max(m, dp_arr[i]);
	return m;
}


