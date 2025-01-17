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
        string s; 
        cin>>s; 

        int n = s.size(); 
        if(s=="()"){
            cout<<"NO"<<endl;
            continue;
            
        }
        int i=0; 
        bool flag = false; 
        while(i<n-1){
            if(s.substr(i,2)==")("){
                flag=true; 
                break;
            }
            i++; 
        }

        string result = ""; 
        if(flag){
            for(int i=0; i<n; i++){
                result +='('; 
            }
            for(int i=0; i<n; i++){
                result +=')'; 
            }
            cout<<"YES"<<endl;
            cout<<result<<endl;
        }

        else{
            for(int i=0; i<n; i++){
                result+="()"; 
            }
            if(result==s){
                cout<<"NO"<<endl; 
            }
            else{
                cout<<"YES"<<endl;
                cout<<result<<endl;
            }
        }
    }
    return 0;
}