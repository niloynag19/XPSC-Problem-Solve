#include<bits/stdc++.h>
using namespace std;
#define ll long long
void niloy()
{
    ll n,k;
    cin>>n>>k;
    for(int i=1; ;i*=2)
    {
        ll x=n/i;
        ll y=(x+1)/2;
        if(k<=y)
        {
            ll K_odd=(2*k)-1;
            cout<<K_odd*i<<endl;
            return;
        }
        else 
        {
            k-=y;
        }
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