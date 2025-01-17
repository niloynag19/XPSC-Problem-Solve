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
        int a,b;
        cin>>a;
        vector<int>v;
        for(int i=0;i<a;i++)
        {
            cin>>b;
            v.push_back(b);
        }
        int c;
        string s;
        for(int i=0;i<a;i++)
        {
            cin>>c;
            cin>>s;
            for(int j=0;j<c;j++)
            {
                if(s[j]=='U')
                {
                    if(v[i]==0)
                    {
                        v[i]=9;
                    }
                    else 
                    {
                        v[i]--;
                    }
                }
                else 
                {
                    if(v[i]==9)
                    {
                        v[i]=0;
                    }
                    else 
                    {
                        v[i]++;
                    }
                }
            }
        }
        for(int i=0;i<a;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}