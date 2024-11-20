#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c;
        cin>>n>>c;
        int ar[n+5];
        for(int i=1;i<=n;i++)
        {
            cin>>ar[i];
        }
        for(int i=1;i<=n;i++)
        {
            ar[i]=ar[i]+i;
        }
        sort(ar+1,ar+n+1);
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(c>=ar[i])
            {
                c=c-ar[i];
                cnt=i;
            }
            else 
            {
                break;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}