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
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int zero=0,non_zero=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]!=0)
            {
                non_zero++;
            }
            else 
            {
                zero++;
            }
        }
        if(zero==0)
        {
            cout<<0<<endl;
        }
        else 
        {
            if(non_zero>=zero-1)
            {
                cout<<0<<endl;
            }
            else 
            {
                int mx=*max_element(v.begin(),v.end());
                if(mx==1)
                {
                    cout<<2<<endl;
                }
                else 
                {
                    cout<<1<<endl;
                }
            }
        }
    }
    return 0;
}