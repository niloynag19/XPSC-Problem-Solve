#include<bits/stdc++.h>
using namespace std;
#define ll long long
void niloy()
{
    ll n,x,k;
    cin>>n>>x>>k;
    ll cnt1=0,cnt2=0;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
        {
            cnt1++;
        }
        else 
        {
            cnt2+=cnt1;
        }
    }
    if((cnt2<=x) && (cnt2%k==0))
    {
        cout<<1<<endl;
    }
    else 
    {
        cout<<2<<endl;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        niloy();
    }
    return 0;
}