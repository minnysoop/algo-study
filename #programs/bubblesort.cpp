#include <bits/stdc++.h>

using namespace std;

void bubbleSort(vector<int>&arr);

int main(void){
    vector<int>arr = {1, 4, 4, 2, 3, 1, 2, 3, 10, 11};
    bubbleSort(arr);
    int n = arr.size();
    for (int i=0;i<n;i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}

void bubbleSort(vector<int>& arr) {
   int n = arr.size();
   for (int i=0;i<n-1;i++){
        for (int j=0;j<n-i-1;j++) {
            if (arr[j] > arr[j+1]) {
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
   }
}
