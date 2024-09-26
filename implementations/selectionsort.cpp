// Selection Sort 

#include <stdio.h>
#include <limits.h>

void swap(int i, int j, int arr[]);

int main(void) {
	int arr[10] = {1, 10, 2, 9, 6, 5, 5, 9, 11, 8};
	int i, j, min_val, min_idx;
	for (i = 0; i < 10; i++) {
		// Find the minimum in the rest of the array
		min_val = INT_MAX;
		for (j = i; j < 10; j++) {
			if (min_val > arr[j]) {
				min_val = arr[j];
				min_idx = j;
			}
		}
		// Swap the minimum element with the i-th element
		swap(i, min_idx, arr);
	}
	
	for (i = 0; i < 10; i++) printf("%d ", arr[i]);
	printf("\n");
	
	return 0;
}

void swap(int i, int j, int arr[]) {
	int tmp = arr[i];
	arr[i] = arr[j];
	arr[j] = tmp;
}
