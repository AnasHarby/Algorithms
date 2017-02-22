#include <bits/stdc++.h>
#include "dp.h"
#define INF 0x3f3f3f3f
using namespace std;

int main() {
	int arr[] = {10, 22, 9, 33, 21, 50, 41, 60};
	int n = sizeof(arr)/sizeof(arr[0]);
	printf("Length of lis is %d\n", lis(arr, n));
	return 0;
}
