#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int v=n/2;
    vector<char>v1,v2;
    if(n%2==0)
    {
        for(int i=0;i<v;i++)
        {
            if(i%2==0)
            {
                v1.push_back('a');
            }
            else 
            {
                v1.push_back('b');
            }
        }
        for(int i=0;i<v;i++)
        {
            if(i%2==0)
            {
                v2.push_back('a');
            }
            else 
            {
                v2.push_back('b');
            }
        }
        for(auto it:v2)
        {
            v1.push_back(it);
        }
        for(auto it:v1)
        {
            cout<<it;
        }
        
    }
    else 
    {
        for(int i=0;i<n-1;i++)
        {
            if(i%2==0)
            {
                cout<<'a';
            }
            else 
            {
                cout<<'b';
            }
        }
        cout<<'b';
    }
    return 0;
}