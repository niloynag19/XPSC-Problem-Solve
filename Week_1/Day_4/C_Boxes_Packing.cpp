#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        mp[a]++;
    }

    int count=0;
    for(auto it:mp)
    {
        count=max(count,it.second);
    }
    cout<<count<<'\n';
    return 0;
}



