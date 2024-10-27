#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b;
    cin>>a>>b;

    int count=0;
    if(a>b)
    {
        count+=a;
        a--;
        count+=max(a,b);
    }
    else 
    {
        count+=b;
        b--;
        count+=max(a,b);
    }
    cout<<count<<'\n';
    return 0;
}