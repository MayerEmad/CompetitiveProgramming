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
	string s;
	int t,one,two;
	cin>>t;
	while(t--)
	{
		one=0,two=0;
	  cin>>s;
	  if(s.size()>3)cout<<3<<endl;
	  else
	  {
		  
	          if(s[0]=='o')     one++;
		      if(s[1]=='n')     one++;
			  if(s[2]=='e')     one++;
			  if(s[0]=='t')     two++;
			  if(s[1]=='o')     two++;
			  if(s[2]=='w')     two++;
		  
		  if(one>two) cout<<1<<endl;
		  else        cout<<2<<endl;
	  }
	}
	//system("pause");
    return 0;
}
