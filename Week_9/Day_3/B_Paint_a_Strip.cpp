#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin>>n;
    if(n<=4)
    {
        if(n==1)
        {
            cout<<1<<endl;
        }
        else 
        {
            cout<<2<<endl;
        }
    }
    else 
    {
        ll sum=4,ans=2;
        while(sum<n)
        {
            ans++;
            sum++;
            sum*=2;
        }
        cout<<ans<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}