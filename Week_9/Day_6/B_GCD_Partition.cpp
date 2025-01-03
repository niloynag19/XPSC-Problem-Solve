#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void niloy()
{
   ll n,max__gcd=1,sum=0;
   cin>>n;
   vector<ll>ar(n,0),pre(n,0);
   for(int i=0;i<n;i++)
   {
        cin>>ar[i];
   }
   pre[0]=ar[0];
   for(int i=1;i<n;i++)
   {
        pre[i]=ar[i]+pre[i-1];
   }
   sum=pre[n-1];
   for(int i=0;i<(n-1);i++)
   {
        max__gcd = max(__gcd(pre[i],sum-pre[i]),max__gcd);
   }
   cout<<max__gcd<<endl;
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