#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll>power(31,1);
vector<ll> right_sm(vector<ll> &ar)
{
    ll n=ar.size();
    stack<int>s;
    vector<ll>ans(n,n+4);
    for(int i=0;i<n;i++)
    {
        int next=ar[i];
        while(!s.empty() && ar[s.top()]>next)
        {
            ans[s.top()]=i;
            s.pop();
        }
        s.push(i);
    }
    return ans;
}

void solve()
{
    ll n,q;
    cin>>n>>q;
    vector<ll>ar(n);
    map<ll,ll>mp;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    vector<ll>x(q);
    for(int i=0;i<q;i++)
    {
        cin>>x[i];
        if(mp.find(x[i])==mp.end())
        {
            mp[x[i]]=i;
        }
    }
    vector<ll> small = right_sm(x);
    for(int i=0;i<n;i++)
    {
        ll c = ar[i];
        ll d = q+2;
        for(ll j=1;j<=30;j++){
            if( (mp.find(j)!=mp.end() ) && (c % power[j]==0) ){
                d=min(d,mp[j]);
            }
        }
        while(d<q)
        {
            c+=power[x[d]-1];
            d=small[d];
        }
        cout<<c<<" ";
    }
    cout<<endl;
    
}
int main()
{
    ll t;
    cin>>t;
    for(int i=1;i<=30;i++)
    {
        power[i]=power[i-1]*2;
    }
    while(t--)
    {
        solve();
    }
    return 0;
}