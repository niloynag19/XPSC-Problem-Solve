#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    map<string,int>mp;
    int count=0;
    cin.ignore();
    while(n--) 
    {
        string s;
        cin>>s;
        if(mp[s]==0)
        {
            mp[s]=1;
            cout<<"OK"<<'\n';
        }
        else
        {
            cout<<s<<mp[s]<<'\n';
            mp[s]++;
        }
    }
    return 0;
}