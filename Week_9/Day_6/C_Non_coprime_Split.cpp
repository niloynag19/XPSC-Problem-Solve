#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll getprime(int n)
{
    for(int i=3;i*i<=n;i+=2)
    {
        while(n%i==0)
        {
            return i;
            n=n/i;
        }
    }
}
bool isprime(int n)
{
    if(n==1)
    {
        return false;
    }
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
void niloy()
{
   int a,b;
   cin>>a>>b;
   if(b<=3)
   {
        cout<<-1<<endl;
   }
   else 
   {
        if(a<b)
        {
            if(b%2==0)
            {
                cout<<2<<" "<<b-2<<endl;
            }
            else 
            {
                b--;
                cout<<2<<" "<<b-2<<endl;
            }
        }
        else if(a==b)
        {
            if(b%2==0)
            {
                cout<<2<<" "<<b-2<<endl;
            }
            else 
            {
                ll prime=getprime(b);
                if(isprime(b))
                {
                    cout<<-1<<endl;
                }
                else 
                {
                    cout<<prime<<" "<<b-prime<<endl;
                } 
            }
        }
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