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
        vector<int>ar(n+1);
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            cin>>ar[i];
            ans=__gcd(ans,abs(ar[i]-i));
        }
        cout<<ans<<endl;
    }
    return 0;
}