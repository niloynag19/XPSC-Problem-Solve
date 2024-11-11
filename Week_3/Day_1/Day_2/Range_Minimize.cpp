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
        if(n<=3)
        {
            cout<<0<<endl;
            continue;
        }
        sort(v.begin(),v.end());
        int result=min({v[n-1]-v[2],v[n-2]-v[1],v[n-3]-v[0]});
        cout<<result<<endl;
    }
    return 0;
}