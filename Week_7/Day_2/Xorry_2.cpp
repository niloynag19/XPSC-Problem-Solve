#include<bits/stdc++.h>
using namespace std;
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
        int a=1,b=0,cnt=0;
        while(a*2<=n)
        {
            a=a*2;
            cnt++;
        }
        int ans=1;
        bool flag=false;
        for(int i=cnt-1;i>=0;i--)
        {
            if(n&1<<i)
            {
                a=b | (1<<i);
                flag=true;
            }
            else 
            {
                if(flag)
                {
                    ans=ans*2;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}