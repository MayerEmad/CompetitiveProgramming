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
	int cnt;
	while(getline(cin,s))
	{
		x="";
		cnt=0;
		for(int i=0;i<s.size();i++)
		{
			if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') ) 
			    x+=s[i];
			else
			    if(x.size())
					cnt++,x="";
		}
		if(x.size()) cnt++,x="";
		cout<<cnt<<endl;
	}

	//system("pause");
    return 0;
}
