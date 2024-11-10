#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x,y,z;
	cin>>x>>y>>z;
	double team_point=x+0.5*y;
	double other_team=z+0.5*y;
    int game=4-(x+y+z);
	
	if(team_point+game>other_team)
	{
	    cout<<"Yes"<<endl;
	}
	else 
	{
	    cout<<"No"<<endl;
	}
    return 0;
}