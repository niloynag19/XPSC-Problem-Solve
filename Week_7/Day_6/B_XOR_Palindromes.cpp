#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string ans="";
        int good_pair=0;
        int bug=0;
        int l=0,r=n-1;
        while(l<r)
        {
            if(s[l]==s[r])
            {
                good_pair+=2;
            }
            else 
            {
                bug++;
            }
            l++;
            r--;
        }
        for(int i=0;i<=n;i++)
        {
            int total=i;
            total-=bug;
            if(total<0)
            {
                ans.push_back('0');
                continue;
            }
            total=max(total%2,total-good_pair );
            total=max(0,total-(n%2));
            if(total==0)
            {
                ans.push_back('1');
            }
            else 
            {
                ans.push_back('0');
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}