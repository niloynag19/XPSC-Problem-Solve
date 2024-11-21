#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    ll k;
    cin>>n>>k;
    vector<ll>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    int l=0,r=0;
    ll ans=0;
    multiset<ll>st;
    while(r<n)
    {
        st.insert(v[r]);
        ll mn=*st.begin(),mx=*st.rbegin();
        if(mx-mn<=k)
        {
            ans+=(r-l+1);
        }
        else 
        {
            while(l<=r)
            {
               mn=*st.begin(),mx=*st.rbegin(); 
               if(mx-mn<=k)
               {
                  break;
               }
               st.erase(st.find(v[l]));
               l++;
            }
            mn=*st.begin(),mx=*st.rbegin();
            if(mx-mn<=k)
            {
                ans+=(r-l+1);
            }

        }
        r++;

    }
    cout<<ans<<endl;
    return 0;
}