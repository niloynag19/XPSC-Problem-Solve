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
        int ar[n+5][n-1];
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<n;j++)
            {
                cin>>ar[i][j];
            }
        }
        map<int,int>mp1,mp2;
        for(int i=1;i<=n;i++)
        {
            mp1[ar[i][n-1]]=i;
            mp2[ar[i][n-1]]++;
        }
        int idx=0;
        int value;
        for(auto it:mp2)
        {
            if(it.second==1)
            {
                idx=it.first;
            }
            else 
            {
                value=it.first;
            }
        }
        for(int i=1;i<n;i++)
        {
            cout<<ar[mp1[idx]][i]<<" ";
        }
        cout<<value<<endl;
    }
    return 0;
}