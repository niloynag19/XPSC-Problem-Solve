#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans=1e9;
        for(int i='a';i<='z';i++)
        {
            int chan=0;
            int l=0,r=n-1;
            while(l<=r)
            {
                if(s[l]!=s[r])
                {
                    if(s[l]==i)
                    {
                        l++;
                        chan++;
                    }
                    else if(s[r]==i)
                    {
                        r--;
                        chan++;
                    }
                    else 
                    {
                        chan=1e9;
                        break;
                    }
                }
                else 
                {
                    l++;
                    r--;
                }
            }
            ans=min(ans,chan);
        }
        if(ans==1e9)
        {
            cout<<-1<<endl;
        }
        else 
        {
            cout<<ans<<endl;
        }
    }
    return 0;
}