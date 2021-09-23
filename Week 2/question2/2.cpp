#include<iostream>
#include<vector>
using namespace std;

int binary_search(vector<int> arr, int l, int r, int x){
    int mid = (l + r) /2 ;
    if (l > r)
    {
        return -1;
    }
    if (arr[mid] == x){
        return mid;
    }

    else if(arr[mid] > x){
        return binary_search(arr, l, mid-1, x);
    }

    else{
        return binary_search(arr, mid+1, r, x);
    }

}


int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int> arr;
        int n;
        int num; 

        cin>>n;
        for(int i =0 ; i < n; i++){
            cin >> num;
            arr.push_back(num);
        }

        bool flag = false;

        for(int i = 0 ; i < n-2; i++){

            for(int j = i + 1; j < n - 1; j++){

                int x=  arr[i] + arr[j];
                int idx = binary_search(arr, j, n-1, x);

                if(idx!=-1){
                    cout<<i<<", "<<j<<", "<<idx<<endl;
                    flag = true;
                }

            }
        }
        if (!flag){
            cout<<"NO SEQUENCE FOUND"<<endl;
        }
    }
    return 0;
}
