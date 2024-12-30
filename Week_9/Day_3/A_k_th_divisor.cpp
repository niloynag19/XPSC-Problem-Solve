#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n,k;
    cin>>n>>k;
    ll count=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
            if(count==k)
            {
                cout<<i<<endl;
                return 0; 
            }
        }
        // if(count>k)
        // {
        //     break;
        // }
    }
    cout<<-1<<endl;
    return 0;
}