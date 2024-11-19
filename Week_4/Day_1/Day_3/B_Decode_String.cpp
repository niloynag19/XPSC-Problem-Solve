#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string ans;
        int i=0;
        while(i<n)
        {
            if(i+2<n && s[i+2]=='0' &&(i+3>=n || s[i+3]!='0'))
            {
                int num=stoi(s.substr(i,2));
                ans+=char('a'+num-1);
                i+=3;
            }
            else 
            {
                int num=s[i]-'0';
                ans+=char('a'+num-1);
                i++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}