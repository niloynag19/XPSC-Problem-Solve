#include<bits/stdc++.h>
using namespace std;
#define ll long long
void niloy()
{
    int n;
    cin>>n;
    vector<int>ar(n),temp(n);
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        temp[i]=ar[i];
    }
    if(ar.size()<=1)
    {
        cout<<-1<<endl;
        return;
    }
    sort(temp.begin(),temp.end());
    for(int i=0;i<n;i++)
    {
        if(ar[i]!=temp[i])
        {
            continue;
        }
        if(i==n-1 && ar[i]==temp[i])
        {
            swap(temp[n-1],temp[n-2]);
        }
        else if(ar[i]==temp[i])
        {
            swap(temp[i],temp[i+1]);
        }
    }
    for(auto it:temp)
    {
        cout<<it<<" ";
    }
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        niloy();
    }
    return 0;
}