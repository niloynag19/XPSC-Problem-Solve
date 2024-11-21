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
        int n,k;
        cin>>n>>k;
        vector<ll>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<ll>b(n);
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        ll cur=a[0],ans=0;
        ll l=0,r=1;
        if(cur<=k)
        {
            ans=1;
        }
        while(r<n)
        {
            if(b[r-1] % b[r]==0)
            {
                cur+=a[r];
            }
            else 
            {
                cur=a[r];
                l=r;
            }
            while(cur>k)
            {
                cur-=a[l];
                l++;
            }
            ans=max(ans,r-l+1);
            r++;
        }
        cout<<ans<<endl;

    }
    return 0;
}