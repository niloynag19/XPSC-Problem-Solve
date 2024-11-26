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
        int n;
        cin>>n;
        int first_b=1,last_a=3*n-1;
        cout<<(n+1)/2<<endl;
        while(last_a>first_b)
        {
            cout<<first_b<<" "<<last_a<<endl;
            first_b+=3;
            last_a-=3;
        }
    }
    return 0;
}