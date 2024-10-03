#include <bits/stdc++.h>

using namespace std;

void insertionSort(vector<int>&arr);

int main(void){
    vector<int>arr = {1, 4, 4, 2, 3, 1, 2, 3, 10, 11};
    insertionSort(arr);
    int n = arr.size();
    for (int i=0;i<n;i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}

void insertionSort(vector<int>&arr) {
    int n = arr.size();
    for (int i=0;i<n;i++){
        int curr = arr[i];
        int j = i-1;

        while (j >= 0 && curr < arr[j]) {
            arr[j + 1] = arr[j]; 
            j--;
        }
        arr[j+1] = curr;
    }
}

