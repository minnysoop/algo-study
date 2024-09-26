#include <stdio.h>

void swap(int i, int j, int arr[]);

int main(void) {
	int arr[10] = {3, 4, 1, 2, 8, 9, 9, 10, 6, 6};
	int i, j;
	for (i = 0; i < 9; i++) {
		j = i;
		while (arr[j] > arr[j+1] && j >= 0) {
			swap(j, j+1, arr);
			j--;
		}
	}
	
	for (i = 0; i < 10; i++) printf("%d ", arr[i]);
	printf("\n");
	return 0;
}

void swap(int i, int j, int arr[]) {
	int t = arr[i];
	arr[i] = arr[j];
	arr[j] = t;
}
