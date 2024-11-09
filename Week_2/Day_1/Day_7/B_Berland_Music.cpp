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
        vector<int>v(n);
        for(auto & it:v)
        {
            cin>>it;
        }
        string s;
        cin>>s;
        map<int,int>like,dislike;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                dislike[v[i]]=i;
            }
            else 
            {
                like[v[i]]=i;
            }
        }
        int num=1;
        for(auto it:dislike)
        {
            v[it.second]=num++;
        }
        for(auto it:like)
        {
            v[it.second]=num++;
        }
        for(int i=0;i<n;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}