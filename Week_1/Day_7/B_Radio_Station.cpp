#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,q;
    cin>>n>>q;
    map<string,string>mp;
    for(int i=0;i<n;i++)
    {
        string name,ip;
        cin>>name>>ip;
        mp[ip]=name;
    }
    for(int i=0;i<q;i++)
    {
        string name,ip;
        cin>>name>>ip;
        ip.pop_back();
        cout<<name<<" "<<ip<<"; #"<<mp[ip]<<endl;
    }
    return 0;
}