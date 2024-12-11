#include<bits/stdc++.h>
using namespace std;
pair<int,int>solve(int x)
{
    int a=0,b=0;
    int bit=0;
    while((1<<bit)<=x)
    {
        bit++;
    }
    int MSB=1<<(bit-1);
    a=MSB;
    b=a^x;
    return{b,a};
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        pair<int,int>ans=solve(x);
        cout<<ans.first<<" "<<ans.second<<endl;
    }
    return 0;
}