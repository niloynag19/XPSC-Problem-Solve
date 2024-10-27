#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b;
    cin>>a>>b;
    int count=0;
    if(a<b)
    {
        count=(b-a)+1;
        cout<<count<<'\n';
    }
    else 
    {
        cout<<"0"<<'\n';
    }
    return 0;
}