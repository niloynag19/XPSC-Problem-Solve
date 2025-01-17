#include<bits/stdc++.h>
using namespace std;
#define ll long long
void niloy()
{
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    int s_one=0;
    int t_one=0;

    for(int i=0;i<n;i++)
    {
        if((a[i]=='1' && b[i]=='0') || (a[i]=='0' && b[i]=='1'))
        {
            s_one++;
        }
        if(a[i]=='1' || b[i]=='1')
        {
            t_one++;
        }
    }
    if(t_one%2==1 || s_one>0)
    {
        cout<<"YES"<<endl;
    }
    else 
    {
        cout<<"NO"<<endl;
    }
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