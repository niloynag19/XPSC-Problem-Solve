#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    if (s[0] == 's')
    {
        s[0]='.';
    }
    if (s.back() == 'p')
    {
        s.back()='.';
    }
    bool flag_p = false;
    bool flag_s = false;

    for (const auto c : s)
    {
        switch (c)
        {
        case 'p':
            flag_p = true;
            break;
        case 's':
            flag_s = true;
            break;
        }
    }
    if(flag_p && flag_s)
    {
        cout<<"NO"<<endl;
    }
    else 
    {
        cout<<"YES"<<endl;
    }

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}