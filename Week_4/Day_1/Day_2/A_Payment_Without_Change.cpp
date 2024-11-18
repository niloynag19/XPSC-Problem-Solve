#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,n,S;
        cin>>a>>b>>n>>S;
        ll ans1=S/n;
        ll used_coin=min(ans1,a);
        ll ans2=S-used_coin*n;

        if(ans2<=b)
        {
            cout<<"YES"<<endl;
        }
        else 
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}