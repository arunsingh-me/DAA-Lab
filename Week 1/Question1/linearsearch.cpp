
#include <iostream>
#include<vector>
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
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        cin>>k;
        int flag=0,counter=0;
        for(int i=0;i<n;i++)
        {
            counter++;
            if(v[i]==k)
            {
                flag=1;
                cout<<"present"<<counter<<endl;
                break;
            }

        }
        if(flag==0)
        {
            cout<<"not present"<<counter<<endl;
        }
    }
    return 0;            
}