#include<bits/stdc++.h>
using namespace std;
#define ll long long
void niloy()
{
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>>ar1(n);
    for(int i=0;i<n;i++)
    {
        cin>>ar1[i].first;
        ar1[i].second=i;
    }
    sort(ar1.begin(),ar1.end());
    vector<int>ar2(n);
    for(int i=0;i<n;i++)
    {
        cin>>ar2[i];
    }
    sort(ar2.begin(),ar2.end());
    vector<int>ans(n);
    for(int i=0;i<n;i++)
    {
        ans[ar1[i].second]=ar2[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
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