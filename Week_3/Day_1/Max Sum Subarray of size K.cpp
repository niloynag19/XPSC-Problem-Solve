#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int k;
    cin>>k;
    int sum=0;
    for(int i=0;i<k;i++)
    {
        sum+=v[i];
    }
    int cur_sum=sum;
    for(int i=k;i<v.size();i++)
    {
        cur_sum+=v[i]-v[i-k];
        sum=max(sum,cur_sum);
    }
    cout<<sum<<endl;
    

    return 0;
}