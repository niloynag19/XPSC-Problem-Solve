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
        vector<int>ar(n);
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            mp[ar[i]]++;
        }
        sort(ar.begin(),ar.end());

        int A=-1,B=-1;
        int l=-1,r=1;
        for(int i=0;i<n;i++)
        {
            if(mp[ar[i]]<k)
            {
                continue;
            }
            if(l==-1)
            {
                l=ar[i];
            }
            if (i==n-1 || ar[i+1] - ar[i]>1 || mp[ar[i+1]]<k)
            {
                r=ar[i];
                if(r-l>=B-A)
                {
                    B=r;
                    A=l;
                }
                l=-1;
                r=-1;
            }
        }
        if(A==-1)
        {
            cout<<-1<<endl;
        }
        else 
        {
            cout<<A<<" "<<B<<endl;
        }
    
        
    }
    return 0;
}