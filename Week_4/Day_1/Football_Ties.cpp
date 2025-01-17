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
        int x,y;
        cin>>x>>y;
        int ans=min(x,y);
        int b=ans%3;
        if(ans<3)
        {
            cout<<ans<<endl;
        }
        else if(ans%3!=0)
        {
            cout<<b<<endl;
        }
        else 
        {
            cout<<0<<endl;
        }
    }
    return 0;
}