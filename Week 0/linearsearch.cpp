// linear search
#include <iostream>
#include<vector>
#include<algorithm>
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
        cin>>n>>k;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<n;i++)
        {
            if(v[i]==k)
            {
                cout<<"element found at"<<i+1<<endl;
                break;
            }
        }
        if(i==n)
        {
            cout<<"element not found"<<endl;
        }
    }
    return 0;
}
// Time Complexity: O(n)
// Space Complexity: O(1)
