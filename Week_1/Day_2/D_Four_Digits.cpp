#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    string value=to_string(n);
    int size=value.size();
    if(size==1)
    {
        value="000"+value;
        cout<<value<<'\n';
    }
    else if(size==2)
    {
        value="00"+value;
        cout<<value<<'\n';
    }
    else if(size==3)
    {
        value="0"+value;
        cout<<value<<'\n';
    }
    else 
    {
        cout<<value<<'\n';
    }
    return 0;
}