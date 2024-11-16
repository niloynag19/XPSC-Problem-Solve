//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    int n=txt.size();
	    int k=pat.size();
	    map<char,int>mp1,mp2;
	    for(char c:pat)
	    {
	        mp1[c]++;
	    }
	    int count=0;
	    for(int i=0;i<k;i++)
	    {
	        mp2[txt[i]]++;
	    }
	    if(mp1==mp2)
	    {
	        count++;
	    }
	    for(int i=k;i<n;i++)
	    {
	        mp2[txt[i]]++;
	        mp2[txt[i-k]]--;
	        
	        if(mp2[txt[i-k]]==0)
	        {
	            mp2.erase(txt[i-k]);
	        }
	        if(mp1==mp2)
	        {
	            count++;
	        }
	    }
	    return count;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends