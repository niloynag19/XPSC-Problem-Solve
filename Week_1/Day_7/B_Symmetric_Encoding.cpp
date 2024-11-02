#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        set<char>st;
        for(int i=0;i<n;i++)
        {
            st.insert(s[i]);
        }
        vector<int>v;
        for(auto ch:st)
        {
            v.push_back(ch);
        }
        map<char,char>mp;
        for(int i=0;i<v.size();i++)
        {
            mp[v[i]]=v[v.size()-i-1];
        }
        for(int i=0;i<n;i++)
        {
            cout<<mp[s[i]];
        }
        cout<<endl;

    }
    return 0;
}