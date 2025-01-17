#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int ar[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>ar[i][j];
            }
        }
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                ll cur_sum=ar[i][j];

                for(int k=1;k<max(n,m);k++)
                {
                    if(i-k>=0 && j-k>=0)
                    {
                        cur_sum+=ar[i-k][j-k];
                    }
                    if(i+k<n && j+k<m)
                    {
                        cur_sum+=ar[i+k][j+k];
                    }
                    if(i-k>=0 && j+k<m)
                    {
                        cur_sum+=ar[i-k][j+k];
                    }
                    if(i+k<n && j-k>=0)
                    {
                        cur_sum+=ar[i+k][j-k];
                    }
                }
                sum=max(sum,cur_sum);
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}