#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    vector<int>ar(1001,0);
    int n;
    cin>>n;
    int mx=-1;
    for(int i=1;i<=n;i++)
    {
        int temp;
        cin>>temp;
        ar[temp]=i;
    }
    for(int i=1;i<=1000;i++)
    {
        for(int j=1;j<=1000;j++)
        {
            if(ar[i] && ar[j] && int(__gcd(i,j))==1)
            {
                mx=max(mx,ar[i]+ar[j]);
            }
        }
    }
    cout<<mx<<endl; 
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