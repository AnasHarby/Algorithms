#include <bits/stdc++.h>

int lcs(std::string x, std::string y, int n, int m) {
	if (m == 0 || n == 0)
		return 0;
	if (x[n - 1] == y[m - 1])
		return 1 + lcs(x, y, n - 1, m - 1);
	else
		return std::max(lcs(x, y, n, m - 1), lcs(x, y, n - 1, m));
}

/*
 * O(n^2).
 */

int lis(int arr[], int n) {
	int dp[n] = {1}, m = 0;

	for (int i = 1; i < n; i++)
		for (int j = 0; j < i; j++)
			if (arr[i] > arr[j] && dp[i] < dp[j] + 1)
				dp[i] = dp[j] + 1;

	for (int i = 0; i < n; i++)
		m = std::max(m, dp[i]);

	return m;
}


