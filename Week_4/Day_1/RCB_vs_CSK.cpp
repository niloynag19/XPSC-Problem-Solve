#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    int x,y;
    cin>>x>>y;
    int ans=x-y;
    if(ans>=18)
    {
        cout<<"RCB"<<endl;
    }
    else 
    {
        cout<<"CSK"<<endl;
    }

    return 0;
}