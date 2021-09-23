#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int l, int m, int h, int &comp, int &inv){
    vector<int> temp;
    int i = l;
    int j = m+1;
    while(i <= m and j <= h){
        comp++;
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i++]);
        }else{
            inv += (m-i)+1;
            temp.push_back(arr[j++]);
        }
    }
    
    while(i <= m){
        temp.push_back(arr[i++]);
    }
    while(j <= h){
        temp.push_back(arr[j++]);
    }
    
    int  k = 0;
    for(int i=l;i<=h;i++){
        arr[i] = temp[k++];
    }
}


void mergeSort(vector<int> &arr, int low, int high, int &comp, int &inv){
    if(low >= high) return;
    int mid = (high+low)/2;

    mergeSort(arr, low,   mid, comp, inv);

    mergeSort(arr, mid+1, high, comp, inv);
    merge(arr, low, mid, high, comp, inv);
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

        mergeSort(arr, 0, n-1, comp, inv);

        for(auto &x: arr){
            cout << x << ' ';
        }
        cout << '\n';
        cout << "Comparison: " << comp << '\n';
        cout << "Inversions: " << inv  << '\n';    
    }

    return 0;
}
