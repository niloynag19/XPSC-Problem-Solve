#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int day=0;
    int count=0;
    for(int i=1;i<=n;i++)
    {
        while(count<n && v[count]<i)
        {
            count++;
        }
        if(count==n)
        {
            break;
        }
        count++;
        day++;
    }
    cout<<day<<endl;

    return 0;
}
