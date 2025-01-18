#include<bits/stdc++.h>
using namespace std;
#define ll long long
void niloy()
{
    ll n,m;
    cin>>n>>m;
    vector<ll>ar(n);
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar.begin(),ar.end());
    ar.push_back(ar[0]);
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=max(ar[i],ar[i+1]);
    }
    sum+=n;
    if(sum<=m)
    {
        cout<<"YES"<<endl;
    }
    else 
    {
        cout<<"NO"<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        niloy();
    }
    return 0;
}