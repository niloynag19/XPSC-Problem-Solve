#include<bits/stdc++.h>
using namespace std;
#define ll long long
void niloy()
{
    int n;
    cin>>n;
    vector<int>ar(n);
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    vector<int>ans(n);
    int score=-1;
    for(int i=0;i<n;i++)
    {
        if(ar[i]>score)
        {
            ans[i]=1;
            score=ar[i];
        }
        else 
        {
            ans[i]=0;
        }
    }
    for(auto it:ans)
    {
        cout<<it<<" ";
    }
    cout<<endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        niloy();
    }
    return 0;
}