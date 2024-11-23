#include<bits/stdc++.h>
#define ll long long
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
        vector<int>arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        string s;
        cin>>s;
        vector<ll>pre_sum(n);
         
        pre_sum[0]=arr[0];

        for(int i=1;i<n;i++)
        {
            pre_sum[i]=pre_sum[i-1]+arr[i];
        }
        ll ans=0;
        int cnt=n-1;

        for(int i=0;i<n;i++)
        {
            if(s[i]=='L')
            {
                while(cnt > i && s[cnt] != 'R') {
                    cnt--;
                }
                if(cnt> i) {
                    ll sum = pre_sum[cnt];
                    if (i > 0) {
                        sum-= pre_sum[i - 1];
                    }
                    ans += sum;
                    cnt--;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}