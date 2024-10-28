#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin>>s;

    int fre[26]={0};
    for(char c:s)
    {
        if(c>='a' && c<='z')
        {
            fre[c-97]++;
        }
    }

    for(int i=0;i<26;i++)
    {
        if(fre[i]==0)
        {
            char a=i+97;
            cout<<a<<'\n';
            return 0;
        }
    }
    cout<<"None"<<'\n';
    return 0;
}