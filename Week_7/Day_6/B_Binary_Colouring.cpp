#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        vector<int>res;
        while(x>0)
        {
            if(x%2==0)
            {
                res.push_back(0);
                x/=2;
            }
            else if(x%4==1)
            {
                res.push_back(1);
                x/=2;
            }
            else 
            {
                res.push_back(-1);
                x=(x+1)/2;
            }
        }
        cout<<res.size()<<endl;
        for(int i=0;i<res.size();i++)
        {
            cout<<res[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}