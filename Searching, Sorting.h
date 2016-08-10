/*
 * BinarySearch.h
 *
 *  Created on: Aug 10, 2016
 *      Author: anas-harby
 */

#ifndef SEARCHING__SORTING_H_
#define SEARCHING__SORTING_H_

int binarySearch(int arr[], int x, int l, int r);
void mergeSort(int arr[], int l, int r);
void quickSort(int arr[], int l, int r);
void findUnsortedSubarray(int arr[], int n);
int kthSmallest(int arr[], int n, int k);
int kthLargest(int arr[], int n, int k);

#endif /* SEARCHING__SORTING_H_ */
