#include<iostream>
#include<string>
#include<math.h>
#include<algorithm>
#include<iomanip>
#include<vector>
#include<fstream>
#include<stdio.h>
#include<string.h>
#include<queue>
#include<map>
#include<set>
#define ll long long
#define ld long double
using namespace std;
void winter_is_coming()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL );
}
int main()
{
	winter_is_coming();
	string s,x;
	while(getline(cin,s))
	{
		x="";
		for(int i=0;i<s.size();i++)
		{
			if(s[i]!=' ')
				   x+=s[i];
			else
			{
				reverse(x.begin(),x.end());
				if(x.size()) cout<<x<<" ",x="";
			}
		}
		if(x.size()) reverse(x.begin(),x.end()),cout<<x;
		cout<<endl;
	}
	//system("pause");
    return 0;
}
