#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m,h;
	    cin>>n>>m>>h;
	    vector<long long>a(n);
	    vector<long long>b(m);
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(int i=0;i<m;i++)
	    {
	        cin>>b[i];
	    }
	    sort(a.begin(),a.end(),greater<int>());
	    sort(b.begin(),b.end(),greater<int>());
	    long long ans=0;
	    long long i=0,j=0;
	    while(i<m && j<n)
	    {
	        ans+=min(b[i]*h,a[j]);
	        i++;
	        j++;
	    }
	    cout<<ans<<endl;
	}

}
