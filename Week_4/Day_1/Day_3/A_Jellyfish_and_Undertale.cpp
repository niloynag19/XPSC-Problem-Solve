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
        int a,b,n;
        cin>>a>>b>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        long long sum=b;
        for(int i=0;i<n;i++)
        {
            sum+=min(v[i],a-1);
        }
        cout<<sum<<endl;

    }
    return 0;
}