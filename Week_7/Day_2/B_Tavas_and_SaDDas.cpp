#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string n;
    cin>>n;
    int length=n.size();
    int idx=0;
    for(int i=1;i<length;i++)
    {
        idx+=(1<<i);
    }
    for(int i=0;i<length;i++)
    {
        if(n[i]=='7')
        {
            idx+=(1<<(length-i-1));
        }
    }
    cout<<idx+1<<endl;
    return 0;
}