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
        int a,b;
        cin>>a>>b;
        int k=a&b;
        cout<<(a^k)+(b^k)<<endl;
    }
    return 0;
}