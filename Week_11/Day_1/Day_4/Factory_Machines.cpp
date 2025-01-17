#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,t;
    cin>>n>>t;
    vector<ll>ar(n);
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    ll l=0,r=1e18;

    while(l<r-1)
    {
        ll mid=(l+r)/2;
        ll cnt=0;
        for(int i=0;i<n;i++)
        {
            if(cnt>=1e18)
            {
                break;
            }
            cnt+=(mid/ar[i]);
        }
        if(cnt>=t)
        {
            r=mid;
        }
        else 
        {
            l=mid;
        }
    }
    cout<<r<<endl;
    return 0;
}