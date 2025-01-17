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
        int n,k;
        cin>>n>>k;
        int size=n-k;
        for(int i=size;i<=n;i++)
        {
            cout<<i<<" ";
        }
        for(int i=size-1;i>0;i--)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}