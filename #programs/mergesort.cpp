#include <bits/stdc++.h>

using namespace std;

void mergeSort(vector<int>&arr);
vector<int> merge(vector<int>&a1, vector<int>&a2);

int main(void){
    vector<int>arr = {1, 4, 4, 2, 0, 3, 1, 2, 3, 10, 11, -4};
    mergeSort(arr);
    int n = arr.size();
    for (int i=0;i<n;i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}

void mergeSort(vector<int>&arr) {
    int n = arr.size();
    if (n <= 1) {
        return;
    }

    int half = arr.size() / 2;
    vector<int>f1(arr.begin(), arr.begin()+half);
    vector<int>f2(arr.begin()+half, arr.end());
    mergeSort(f1);
    mergeSort(f2);
    arr = merge(f1, f2);
}

vector<int> merge(vector<int>&a1, vector<int>&a2){
    vector<int>r;
    int a1_n = a1.size();
    int a2_n = a2.size();

    int i, j;
    i = j = 0;
    while (i < a1_n && j < a2_n) {
        if (a1[i] < a2[j]) {
            r.push_back(a1[i]);
            i++;
        } else {
            r.push_back(a2[j]);
            j++;
        }
    }

    while (i < a1_n) {
        r.push_back(a1[i]);
        i++;
    }

    while (j < a2_n) { 
        r.push_back(a2[j]);
        j++;
    }

    return r;
}