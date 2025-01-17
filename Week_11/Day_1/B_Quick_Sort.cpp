#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>ar(n);
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        if(is_sorted(ar.begin(),ar.end()))
        {
            cout<<0<<endl;
            continue;
        }
        int  order=0;
        for(int i=0;i<n;i++)
        {
            if(ar[i]==order+1)
            {
                order++;
            }
        }
        int st=n-order;
        int ans=(st+k-1)/k;
        cout<<ans<<endl;
    }
    return 0;
}