#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       vector<int>ar(n);
       for(int i=0;i<n;i++)
       {
          cin>>ar[i];
       }

       int ans=INT_MAX;
       for(int i=0;i<n;i++)
       {
          int mx=0;
          if(i+1<n)
          {
              mx=max(mx,abs(ar[i+1]-ar[i]));
          }
          if(i-1>=0)
          {
              mx=max(mx,abs(ar[i-1]-ar[i]));
          }
          ans=min(ans,mx);
       }
       cout<<ans<<endl;
    }
    return 0;
}