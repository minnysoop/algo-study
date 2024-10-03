#include <bits/stdc++.h>

using namespace std;

void selectionSort(vector<int>&arr);

int main(void){
    vector<int>arr = {1, 4, 4, 2, 0, 3, 1, 2, 3, 10, 11, -4};
    selectionSort(arr);
    int n = arr.size();
    for (int i=0;i<n;i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}

void selectionSort(vector<int>&arr) {
    int n = arr.size();
    for (int i=0;i<n;i++){
        int min = arr[i];
        int idx = i;
        for (int j=i;j<n;j++) {
            if (arr[j] < min) {
                min = arr[j];
                idx = j;
            }
        }
        
        if (idx != i) {
            int tmp = arr[i];
            arr[i] = arr[idx];
            arr[idx] = tmp;
        }
    }

}

