#include <bits/stdc++.h>

using namespace std;

void quickSort(vector<int>&arr);
void quickSortAux(vector<int>&arr, int left, int right);

int main(void){
    vector<int>arr = {1, 4, 4, 2, 0, 3, 1, 2, 3, 10, 11, -4};
    quickSort(arr);
    int n = arr.size();
    for (int i=0;i<n;i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}

void quickSort(vector<int>&arr) {
    quickSortAux(arr, 0, arr.size()-1);
}

void quickSortAux(vector<int>&arr, int left, int right) {
    if (left < right) {
        int pivot = arr[left];
        int i = left + 1;
        int j = right;

        while (i <= j) {
            while (i <= right && arr[i] <= pivot) i++;
            while (j >= left && arr[j] > pivot) j--;

            if (i < j) swap(arr[i], arr[j]);
        }

        // Swap pivot
        swap(arr[left], arr[j]);

        quickSortAux(arr, left, j - 1);
        quickSortAux(arr, j + 1, right);
    }
}