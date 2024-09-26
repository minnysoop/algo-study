#include<stdio.h>

void mergesort(int a[], int start, int end);
void merge(int a[], int start, int middle, int end);

int main(void) {
	int n = 9;
	int arr[9] = {7, 3, 4, 2, 1, 6, 5, 8, 9}; 
	mergesort(arr, 0, n-1);
	for (int i = 0; i < n; i++) printf("%d ", arr[i]);
	printf("\n");
	return 0;
}

void merge(int a[], int start, int middle, int end) {
	int sorted[9];
	int i = start;
	int j = middle + 1;
	int k = start;
	while (i <= middle && j <= end) {
		if (a[i] <= a[j]) {
			sorted[k] = a[i];
			i++;
		} else {
			sorted[k] = a[j];
			j++;
		}
		k++;
	}
	
	if (i > middle) {
		for (int t = j; t <= end; t++) {
			sorted[k] = a[t];
			k++;
		}
	} else {
		for (int t = i; t <= middle; t++) {
			sorted[k] = a[t];
			k++;
		}
	}
	
	for (int t = start; t <= end; t++) {
		a[t] = sorted[t];
	}
	
}

void mergesort(int a[], int start, int end) {
	if (start < end) {
		int middle = (start+end)/2;
		mergesort(a, middle + 1, end);
		mergesort(a, start, middle);
		merge(a, start, middle, end);
	}
}
