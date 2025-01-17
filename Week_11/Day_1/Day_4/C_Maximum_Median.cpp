#include<bits/stdc++.h>
using namespace std;
#define ll long long
int ok(ll mid,int n,vector<int>ar,int k)
{
    ll cnt=0;
    for(int i=(n/2);i<n;i++)
    {
        if(ar[i]<mid)
        {
            cnt+=(mid-ar[i]);
        }
        else 
        {
            cnt+=0;
        }
    }
    return cnt<=k;
}
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>ar(n);
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar.begin(),ar.end());
    ll l=1,r=2e9,mid,ans;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(ok(mid,n,ar,k))
        {
            ans=mid;
            l=mid+1;
        }
        else 
        {
            r=mid-1;
        }
    }
    cout<<ans<<endl;
    return 0;
}