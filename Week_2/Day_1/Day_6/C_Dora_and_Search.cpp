#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ar[n];
        set<int>st;
        for(int i=1;i<=n;i++)
        {
            cin>>ar[i];
        }
        for(int i=1;i<=n;i++)
        {
            st.insert(i);
        }
        int left=1;
        int right=n;
        int flag;
        while(1)
        {
            int mn=*st.begin();
            int mx=*st.rbegin();
            int flag=0;
            if(mn==ar[left] || mx==ar[left])
            {
                st.erase(ar[left]);
                left++;
                flag=1;
            }
            if(mn==ar[right] || mx==ar[right])
            {
                st.erase(ar[right]);
                right--;
                flag=1;
            }
            if(flag==0 || left>right)
            {
                break;
            }
        }
        if(left>right)
        {
            cout<<"-1"<<endl;
        }
        else 
        {
            cout<<left<<" "<<right<<endl;
        }
    }
    return 0;
}