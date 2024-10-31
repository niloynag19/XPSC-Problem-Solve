#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.size();
        bool flag=false;
        for(int i=0;i<n-1;i++)
        {
            cout<<s[i];
            if(s[i]==s[i+1] && flag==false)
            {
                if(s[i]!='z')
                {
                    cout<<char(s[i]+1);
                }
                else 
                {
                    cout<<'a';
                }
                flag=true;
            }
        }
        if(flag)
        {
            cout<<s[n-1]<<endl;
        }
        if(flag==false && s[n-1]!='z')
        {
            cout<<s[n-1]<<char(s[n-1]+1)<<endl;
        }
        else if(flag==false)
        {
            cout<<s[n-1]<<'a'<<endl;
        }
    }
    return 0;
}