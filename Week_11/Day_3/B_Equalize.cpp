#include<bits/stdc++.h>
using namespace std;
#define ll long long
void niloy()
{
    int n;
    cin>>n;
    vector<int>ar(n);
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar.begin(),ar.end());
    ar.erase(unique(ar.begin(),ar.end()),ar.end());
    int ans=1;
    for(int i=0;i<ar.size();i++)
    {
        int k=ar[i]+n-1;
        int a=upper_bound(ar.begin(),ar.end(),k)-ar.begin()-i;
        ans=max(ans,a);
    }
    cout<<ans<<endl;
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