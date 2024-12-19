#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>ar(n);
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(ar[i]>ar[(i+1)%n])
            {
                count++;
            }
        }
        if(count<=1)
        {
            cout<<"Yes"<<endl;
        }
        else 
        {
            cout<<"No"<<endl;
        }
    }
    return 0;
}