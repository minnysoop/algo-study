#include<stdio.h>

void quicksort(int arr[], int start, int end);
void swap(int i, int j, int arr[]);

int main(void) {
	
	int n = 10;
	int arr[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2 ,9};
	quicksort(arr, 0, n-1);
	int i;
	for (i = 0; i < 10; i++) printf("%d ", arr[i]);
	printf("\n");
	return 0;
}

void quicksort(int arr[], int start, int end) {
	if (start >= end) {
		return;
	}
	
	int pivot = start;
	int i = start + 1;
	int j = end;
	
	// Repeat until an overlap occurs 
	while (i <= j) {
		while (arr[i] <= arr[pivot]) i++;
		while (arr[j] >= arr[pivot] && j > start) j--;
		if (i > j) {
			swap(j, pivot, arr);
		} else {
			swap(j, i, arr);
		}
	}
	quicksort(arr, start, j-1);
	quicksort(arr, j + 1, end);
}

void swap(int i, int j, int arr[]) {
	int t = arr[i];
	arr[i] = arr[j];
	arr[j] = t;
}
