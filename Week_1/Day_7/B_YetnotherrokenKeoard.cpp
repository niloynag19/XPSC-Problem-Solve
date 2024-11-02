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
        stack<int>s1,s2;
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='A' && s[i]<='Z' && s[i]!='B')
            {
                s1.push(i);
            }
            if(s[i]>='a' && s[i]<='z' && s[i]!='b')
            {
                s2.push(i);
            }
            if(s[i]=='B' && !s1.empty())
            {
                s[s1.top()]='&';
                s1.pop();
            }
            if(s[i]=='b' && !s2.empty())
            {
                s[s2.top()]='&';
                s2.pop();
            }
        }
        for(char c:s)
        {
            if(c!='B' && c!='b' && c!='&')
            {
                cout<<c;
            }
        }
        cout<<endl;
        
    }
    return 0;
}