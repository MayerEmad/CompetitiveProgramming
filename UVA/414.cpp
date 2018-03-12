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
#include<bitset>
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
	int n,space,mn,tot;
	while(cin>>n && n)
	{
	  mn=100,space=0,tot=0;
	  cin.ignore();

	  for(int i=0;i<n;i++)
	  {
		 getline(cin,s);
		 space=0;
		 for(int j=0;j<s.size();j++)
		 {
			 if(s[j]!='X') space++;
		 }
		  mn=min(mn,space);
		 // cout<<space<<endl;
		  tot+=space;
	  }

	  tot=tot-(mn*n);
	  cout<<tot<<"\n";
	}
	//system("pause");
    return 0;
}
