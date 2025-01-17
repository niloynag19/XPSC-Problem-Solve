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
        string s="";
        for(char c='a';c<='z';c++)
        {
            s+=c;
        }
        int n;
        cin>>n;
        map<char,int>mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]=0;
        }
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            for(auto it:mp)
            {
                if(it.second==v[i])
                {
                    cout<<it.first;
                    mp[it.first]++;
                    break;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}

