#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>ar(n);
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            mp[ar[i]]++;
        }
        int mx=0;
        for(auto it:mp)
        {
            mx=max(mx,it.second);
        }
        int ans=0;
        while(mx<n)
        {
            if((2*mx)>n)
            {
                ans++;
                ans=ans+(n-mx);
                break;
            }
            else 
            {
                ans++;
                ans+=mx;
                mx=2*mx;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}