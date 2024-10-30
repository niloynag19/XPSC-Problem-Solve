#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,t;
    cin>>a>>b>>t;
    int biscuit;
    if(t<a)
    {
        cout<<"0"<<'\n';
    }
    else if(t>=a)
    {
        int c=t/a;
        biscuit=c*b;
        cout<<biscuit<<'\n';
    }
    return 0;
}