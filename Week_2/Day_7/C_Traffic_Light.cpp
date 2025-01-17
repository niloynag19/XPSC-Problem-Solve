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
        char c;
        cin>>n>>c;
        string s;
        cin>>s;
        if(c=='g')
        {
            cout<<0<<endl;
            continue;
        }
        vector<int>v;
        s+=s;
        for(int i=0;i<2*n;i++)
        {
            if(s[i]=='g')
            {
                v.push_back(i);
            }
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]==c)
            {
                int ub=lower_bound(v.begin(),v.end(),i)-v.begin();
                ans=max(ans,v[ub]-i);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}