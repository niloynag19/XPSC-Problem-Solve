#include<bits/stdc++.h>
using namespace std;
#define ll long long
void niloy()
{
    ll a,b;
    cin>>a>>b;
    cout<<"YES"<<endl;
    for(int i=a;i<b+1;i+=2)
    {
        cout<<i<<" "<<i+1<<endl;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    niloy();
    return 0;
}