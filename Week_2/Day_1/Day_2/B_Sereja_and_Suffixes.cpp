#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<int>v(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    vector<int>cnt(n+1);
    set<int>s;
    for(int i=n;i>=1;i--)
    {
        s.insert(v[i]);
        cnt[i]=s.size();
    }
    for(int i=1;i<=m;i++)
    {
        int pos;
        cin>>pos;
        cout<<cnt[pos]<<endl;
    }
    return 0;
}