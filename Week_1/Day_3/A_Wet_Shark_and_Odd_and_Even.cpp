#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    long long sum=0;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
    sort(v.begin(),v.end());
    if(sum%2==0)
    {
        cout<<sum<<'\n';
    }
    else
    {
        for(auto it:v)
        {
            if(it%2!=0)
            {
                sum=sum-it;
                break;
            }
        }
        cout<<sum<<'\n';
    }
    return 0;
}
