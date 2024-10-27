#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b,c;
    cin>>a>>b>>c;
    int ans;
    for(int i=a;i<=b;i++)
    {
        if(i%c==0)
        {
            ans=i;
            break;
        }
        else
        {
            ans=-1;
        } 
    }
    cout<<ans<<'\n';
    return 0;
}
