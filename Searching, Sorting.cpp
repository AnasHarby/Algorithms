#include "Searching, Sorting.h"

#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int binarySearch(int arr[], int x, int l, int r) {
	if (r >= l) {
		int mid = l + (r - l) / 2;
		if (arr[mid] == x)
			return mid;
		else if (arr[mid] > x)
			return binarySearch(arr, x, l, mid - 1);
		else
			return binarySearch(arr, x, mid + 1, r);
	}
	return -1;
}

void merge(int arr[], int l, int m, int r) {
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;
	int L[n1], R[n2];

	for (i = 0; i < n1 - 1; i++)
		L[i] = arr[l + i];
	for (j = 0; j < n2 - 1; j++)
		R[j] = arr[m + 1 + j];
	i = 0, j = 0, k = l;
	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			arr[k] = L[i];
			i++;
		} else {
			arr[k] = R[j];
			j++;
		}
		k++;
	}
	while (i < n1) {
		arr[k] = L[i];
		i++;
		k++;
	}
	while (j < n2) {
		arr[k] = R[j];
		j++;
		k++;
	}
}

void mergeSort(int arr[], int l, int r) {
	if (l < r) {
		int m = l + (r - l) / 2;

		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);
		merge(arr, l, m, r);
	}
}

int partition(int arr[], int l, int r) {
	if (l == r)
		return l;
	int pivot = arr[r];
	int i = l;
	for (int j = l; j < r; j++) {
		if (arr[j] <= pivot) {
			swap(&arr[i], &arr[j]);
			i++;
		}
	}
	swap(&arr[i], &arr[r]);
	return i;
}

int randomPartition(int arr[], int l, int r) {
	int n = r - l + 1;
	int pivot = rand() % n;
	swap(&arr[l + pivot], &arr[r]);
	return partition(arr, l, r);
}

void quickSort(int arr[], int l, int r) {
	if (l < r) {
		int pi = partition(arr, l, r);

		quickSort(arr, l, pi - 1);
		quickSort(arr, pi + 1, r);
	}
}

void findUnsortedSubarray(int arr[], int n) {
	int s = 0, e = n - 1, maxElem, minElem;
	for (s = 0; s < n - 1; s++) {
		if (arr[s] > arr[s + 1])
			break;
	}
	if (s == n - 1) {
		cout << "Array is already sorted." << endl;
		return;
	}
	for (e = n - 1; e > 0; e--) {
		if (arr[e] < arr[e - 1])
			break;
	}
	maxElem = arr[s], minElem = arr[s];
	for (int i = s + 1; i <= e; i++) {
		maxElem = max(arr[i], maxElem);
		minElem = min(arr[i], minElem);
	}
	for (int i = 0; i < s; i++) {
		if (arr[i] > minElem) {
			s = i;
			break;
		}
	}
	for (int i = n - 1; i >= e + 1; i--) {
		if (arr[i] < maxElem) {
			e = i;
			break;
		}
	}
	cout << "Subarray between " << s << " and " << e << "." <<  endl;
}

int kthSmallestUtil(int arr[], int l, int r, int k) {
	if (k > 0 && k <= r - l + 1) {
		int pos = randomPartition(arr, l, r);
		if (pos - l == k - 1)
			return arr[pos];
		if (pos - l > k - 1)
			return kthSmallestUtil(arr, l, pos - 1, k);
		else
			return kthSmallestUtil(arr, pos + 1, r, k - pos + l - 1);
	}
	return INT_MAX;
}

int kthSmallest(int arr[], int n, int k) {
	return kthSmallestUtil(arr, 0, n - 1, k);
}

int kthLargest(int arr[], int n, int k) {
	return kthSmallestUtil(arr, 0, n - 1, n - k + 1);
}
