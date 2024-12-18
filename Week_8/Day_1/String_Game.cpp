#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                cnt++;
            }
        }
        int cnt1=n-cnt;
        int ans=min(cnt1,cnt);
        if(ans%2==0)
        {
            cout<<"Ramos"<<endl;
        }
        else 
        {
            cout<<"Zlatan"<<endl;
        }
    }
    return 0;
}