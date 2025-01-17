#include<bits/stdc++.h>
#define ll long long
using namespace std;
void niloy()
{
    ll n;
    cin>>n;
    ll a=0,b=0;
    vector<ll>ar(n);
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        if(ar[i]==1)
        {
            a+=2;
        }
        else 
        {
            a++;
        }
        b+=ar[i];
    }
    if(n==1)
    {
        cout<<"NO"<<endl;
        return;
    }
    if(a<=b)
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