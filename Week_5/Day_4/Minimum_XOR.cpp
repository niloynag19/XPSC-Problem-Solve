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
        int n,XOR=0;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            XOR^=arr[i];
        }
        int result=XOR;
        for(int i=0;i<n;i++)
        {
            int cur_xor=(XOR^arr[i]);
            result=min(result,cur_xor);
        }
        cout<<result<<endl;
    }
    return 0;
}