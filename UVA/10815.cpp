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
	string s,fix;
	set<string> ss;
	set<string> ::iterator it;
	//int t=10;
	while(cin>>s)
	{//cin>>s;
		fix="";
		for(int i=0;i<s.size();i++)
		{
			if(s[i]>='A' && s[i]<='Z')
				s[i]=s[i]+32,fix+=s[i];
			else if(s[i]>='a' && s[i]<='z')
				fix+=s[i];
			else if (fix.size())
				ss.insert(fix),fix="";	
		}
		if(fix.size()) ss.insert(fix);	
	}
	for(it=ss.begin();it!=ss.end();it++)
		cout<<*it<<endl;

	//system("pause");
    return 0;
}
