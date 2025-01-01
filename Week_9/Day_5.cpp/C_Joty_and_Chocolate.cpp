#include<bits/stdc++.h>
using namespace std;
#define ll long long
int lcm(int a,int b)
{
    return (a*b)/__gcd(a,b);
}
int main()
{
    ll n,a,b,p,q;
    cin>>n>>a>>b>>p>>q;
    ll ans1=(n/a)*p;
    ll ans2=(n/b)*q;
    ll ans3=(n/lcm(a,b));
    ll ans4=(ans1+ans2)-(ans3*(p+q));
    ll mx=max(p,q);
    ll ans5=mx*ans3;
    cout<<ans4+ans5<<endl;

    return 0;
}