#include<bits/stdc++.h>
using namespace std;
#define ll long long
void niloy()
{
    int n;
    cin>>n;
    vector<ll>ar(n);
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    if(is_sorted(ar.begin(),ar.end()))
    {
        cout<<"YES"<<endl;
        return;
    }
    ll last=0;
    vector<ll>ans;
    for(int i=0;i<n;i++)
    {
        ll a=ar[i]/10;
        ll b=ar[i]%10;
        if(a>=last && b>=a)
        {
            last=b;
            ans.push_back(a);
            ans.push_back(b);
        }
        else 
        {
            ans.push_back(ar[i]);
            last=ar[i];
        }
    }
    if(is_sorted(ans.begin(),ans.end()))
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