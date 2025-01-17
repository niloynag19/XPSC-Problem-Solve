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
        int n,m,q;
        cin>>n>>m>>q;
        vector<int>tea(m);
        for(int i=0;i<m;i++)
        {
            cin>>tea[i];
        }
        sort(tea.begin(),tea.end());
        while(q--)
        {
            int david;
            cin>>david;
            if(david<tea[0])
            {
                cout<<tea[0]-1<<endl;
                continue;
            }
            if(david>tea[m-1])
            {
                cout<<n-tea[m-1]<<endl;
                continue;
            }
            auto it=lower_bound(tea.begin(),tea.end(),david);
            auto jt=it;
            jt--;
            int left=*jt;
            int right=*it;
            int mid=(left+right)/2;
            cout<<min(abs(mid-left),abs(mid-right))<<endl;
        }
    }
    return 0;
}