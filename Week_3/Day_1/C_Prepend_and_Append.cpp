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
        int ans=n;
        int l=0,r=n-1;
        while(l<r && s[l]!=s[r])
        {
            l++;
            r--;
            ans-=2;

        }
        cout<<ans<<endl;
    }
    return 0;
}