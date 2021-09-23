
#include<iostream>
using namespace std;

int count=0;
int binarySearch(int a[],int low,int high,int k){
    count;
    if(low>high){
        return -1;
    }
    
    int mid=low+(high-low)/2;
    if(a[mid]==k){
        count++;
        return mid;
    }
            
    else if (a[mid]>k){
        count++;
        return binarySearch(a,low,mid-1,k);
    }
    else{
        count++;    
        return binarySearch(a,mid+1,high,k);
    }
    
    
}

int exponentialSearch(int a[],int size,int k){
    count=0;
    if(a[0]==k){
        count++;
        return 0;
    }
    else{
        count++;
    }
    int i=1;
    while(i<size && a[i]<=k){
        count++;
        i=i*2;
    }
    return binarySearch(a,(i/2),min(i,size-1),k);
}

int main()
{
      #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin>>t;  
    count;
    while(t--){
        int n;
        cin>>n;  
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int key;
        cin>>key;
        int res=exponentialSearch(arr,n,key);
        if(res>=0) {
            cout<<"Present "<<count<<endl;
            count=0;
        }
        else{
            cout<<"Not present "<<count<<endl;
            count++;
        }
    }
}