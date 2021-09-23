#include <bits/stdc++.h>
using namespace std;
int partition(vector<int> &arr, int low, int high, int key, int &swaps){
    int i = low, j = high;
    while(i < j){
        while(arr[i] <= arr[key])
        i++;
        while(arr[j] > arr[key])
        j--;
        if(i < j){
            swap(arr[i], arr[j]);
            swaps++;
        }
    }
    swap(arr[key], arr[j]);
    if(key != j)
        swaps++;
    return j;
}

void quickSort(vector<int> &arr, int low, int high, int &swaps){
    if(low >= high) return;
    int n = arr.size();
    int p = partition(arr, low, high, low, swaps);
    quickSort(arr, low, p-1,  swaps);
    quickSort(arr, p+1, high, swaps);
}

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        int comp = 0, inv = 0;

        int swaps = 0;
        quickSort(arr, 0, n-1, swaps);

        for(auto &x: arr){
            cout << x << ' ';
        }
        cout << '\n';
        cout << "Swaps: " << swaps << '\n'; 
    }

    return 0;
}