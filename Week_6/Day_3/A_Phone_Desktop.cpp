#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll x,y;
        cin>>x>>y;
        ll ans=(y+1)/2;
        ll cnt=0;
        if(y%2==0)
        {
            cnt=(y/2)*7;
        }
        else 
        {
            cnt=(y/2)*7+11;
        }
        if(x>cnt)
        {
            ll res=x-cnt;
            ll result=ans+(res+14)/15;
            cout<<result<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }
    }
    return 0;
}