// Bubble Sort

#include<stdio.h>

void swap(int i, int j, int arr[]);

int main(void) {
	int arr[10] = {1, 4, 2, 8, 102, 10, 9, 4, 2, -1};
	
	int i, j;
	for (i = 0; i < 9; i++) {
		// Bubble the largest element to the top
		for (j = i + 1; j < 10; j++) {
			if (arr[j] < arr[i]) {
				swap(i, j, arr);
			}
		}
	}
	
	for (i = 0; i < 10; i++) printf("%d ", arr[i]);
	printf("\n");
	
}

void swap(int i, int j, int arr[]) {
	int tmp = arr[i];
	arr[i] = arr[j];
	arr[j] = tmp;
}
