#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;    
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cin>>k;
        int l=0,r=n-1;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(a[mid]==k)
            {
                int cnt=0;
                for(int i=0;i<n;i++)
                {
                    if(a[i]==k)
                    {
                        cnt++;
                    }
                }
                cout<<k<<" "<<cnt<<endl;
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
    }
    return 0;
}
