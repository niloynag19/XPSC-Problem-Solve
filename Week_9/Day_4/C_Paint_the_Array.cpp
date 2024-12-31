#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin>>n;
    vector<ll>ar(n);
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    ll gcd1=0,gcd2=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            gcd1=__gcd(gcd1,ar[i]);
        }
        else 
        {
            gcd2=__gcd(gcd2,ar[i]);
        }
    }
    bool flag_1=true,flag_2=true;
    for(int i=1;i<n;i+=2)
    {
        if(ar[i]%gcd1==0)
        {
            flag_1=false;
            break;
        }
    }
    for(int i=0;i<n;i+=2)
    {
        if(ar[i]%gcd2==0)
        {
            flag_2=false;
            break;
        }
    }
    if(!flag_1 && !flag_2)
    {
        cout<<0<<endl;
    }
    else if(flag_1)
    {
        cout<<gcd1<<endl;
    }
    else 
    {
        cout<<gcd2<<endl;
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