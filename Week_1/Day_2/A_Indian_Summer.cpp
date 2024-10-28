#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    set<string>st;
    cin.ignore();
    for(int i=0;i<n;i++)
    {
        string s;
        getline(cin,s);
        st.insert(s);
    }
    int count=0;
    for(auto value:st)
    {
        count=st.size();
    }
    cout<<count<<endl;
    return 0;
}