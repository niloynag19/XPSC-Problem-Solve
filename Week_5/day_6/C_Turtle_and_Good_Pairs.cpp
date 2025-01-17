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
        map<char,int>mp;
        for(char c:s)
        {
            mp[c]++;
        }
        while(n>0)
        {
            for(auto &it:mp)
            {
                if(it.second>0)
                {
                    cout<<it.first;
                    it.second--;
                    n--;

                }
            }
        }
        cout<<endl;
    }
    return 0;
}