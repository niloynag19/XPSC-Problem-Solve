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
        int n,m;
        cin>>n>>m;
        if(n>=m)
        {
            int dif=n-m;
            if(dif%2==0)
            {
                cout<<"Yes"<<endl;
            }
            else 
            {
                cout<<"No"<<endl;
            }
        }
        else 
        {
            cout<<"No"<<endl;
        }
    }
    return 0;
}