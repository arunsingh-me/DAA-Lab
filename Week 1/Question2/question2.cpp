
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
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
    while(t--)
    {
        int n,k;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cin>>k;
        sort(a.begin(),a.end());
        int l=0,r=n-1;
        int c=0;
        while(l<=r)
        {
            c++;
            int mid=(l+r)/2;
            if(a[mid]==k)
            {
                cout<<Present<<c<<endl;
                break;
            }
            else if(a[mid]<k)
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        if(l>r)
        {
            cout<<Absent<<c<<endl;
        }
    }
    return 0;
}
