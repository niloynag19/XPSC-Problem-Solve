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
        string a,b;
        cin>>a>>b;
        if(a==b)
        {
            cout<<"="<<endl;
            continue;
        }
        char t_a=a.back();
        char t_b=b.back();

        if(t_a=='M')
        {
            if(t_b=='S')
            {
                cout<<">"<<endl;
            }
            else 
            {
                cout<<"<"<<endl;
            }
            continue;
        }
        if(t_b=='M')
        {
            if(t_a=='S')
            {
                cout<<"<"<<endl;
            }
            else 
            {
                cout<<">"<<endl;
            }
            continue;
        }
        if(t_a=='S' && t_b=='S')
        {
            if(a.size()>b.size())
            {
                cout<<"<"<<endl;
            }
            else 
            {
                cout<<">"<<endl;
            }
            continue;
        }
        if(t_a=='L' && t_b=='L')
        {
            if(a.size()>b.size())
            {
                cout<<">"<<endl;
            }
            else 
            {
                cout<<"<"<<endl;
            }
            continue;
        }
        if(t_a=='S')
        {
            cout<<"<"<<endl;
        }
        else 
        {
            cout<<">"<<endl;
        }
    }
    return 0;
}

