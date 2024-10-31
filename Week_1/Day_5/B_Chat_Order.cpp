#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    map<string,int>mp;
    stack<string>st;
    while(t--)
    {
        string s;
        cin>>s;
        st.push(s);
    }
    while(!st.empty())
    {
        if(mp.count(st.top())==0)
        {
            cout<<st.top()<<'\n';
            mp[st.top()]++;
        }
        st.pop();
    }
    return 0;
}