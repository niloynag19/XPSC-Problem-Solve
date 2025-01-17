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
        ll n;
        cin>>n;
        ll m=(n*(n-1))/2;
        vector<ll>a(n),b(m);
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
        }
        sort(b.begin(),b.end());
        ll x=1,idx=0;
        ll cnt=n-x;
        while(n-x>0)
        {
            a[idx++]=b[cnt-1];
            x++;
            cnt+=n-x;
        }
        a[n-1]=1e9;
        for(ll it:a)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return 0;
}