#include <bits/stdc++.h>
using namespace std;
int partition(vector<int> &arr, int low, int high, int key)
{
    int i = low, j = high;
    while(i < j){
        while(arr[i] <= arr[key]) 
        i++;
        while(arr[j] >  arr[key]) 
        j--;
        if(i < j)
            swap(arr[i], arr[j]);
    }
    return j;
}

int kth_element(vector<int> &arr, int k, int low, int high){
    if(low > high)
     return -1;
    int n = arr.size();
    int p = partition(arr, low, high, low);
    if(k == p+1) 
      return arr[p];
    if(k <  p+1) 
       return kth_element(arr, k, low, p-1);
    else 
            return kth_element(arr, k, p+1, high); 
}

int main(){

    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }

        int ans = kth_element(arr, k, 0, n-1);
        cout << ans << '\n';
    }

    return 0;
}