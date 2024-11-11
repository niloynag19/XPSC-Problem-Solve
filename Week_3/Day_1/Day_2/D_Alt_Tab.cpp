#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    int k=t;
    vector<string>v;
    while(t--)
    {
        string s;
        cin>>s;
        v.push_back(s);
    }
    map<string,int>mp;
    string result;
    for(int i=k-1;i>=0;i--)
    {
        if(mp[v[i]]==0)
        {
            int n=v[i].size();
            result.push_back(v[i][n-2]);
            result.push_back(v[i][n-1]);
            mp[v[i]]++;
        }
    }
    cout<<result<<endl;
    return 0;
}