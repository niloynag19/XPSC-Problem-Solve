#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    ll s;
    cin>>n>>s;
    vector<ll>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll l=0,sum=0,count=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];

        while(sum>=s)
        {
            count+=(n-i);
            sum-=a[l];
            l++;
        }
    }
    cout<<count<<endl;
    return 0;
}