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
        ll n,k;
        cin>>n>>k;
        vector<ll>a(k);
        for(int i=0;i<k;i++)
        {
            cin>>a[i];
        }
        if(k==1)
        {
            cout<<"Yes"<<endl;
        }
        else 
        {
            vector<ll>v(n);
            ll j=n-1;
            for(int i=k-1;i>=1;i--)
            {
                v[j]=a[i]-a[i-1];
                j--;
            }
            while(j>=0)
            {
                v[j]=v[j+1];
                a[0]-=v[j];
                j--;
            }
            v[0]+=a[0];
            if(is_sorted(v.begin(),v.end()))
            {
                cout<<"Yes"<<endl;
            }
            else 
            {
                cout<<"No"<<endl;
            }
        }

    }
    return 0;
}