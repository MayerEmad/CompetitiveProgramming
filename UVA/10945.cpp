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
	while(getline(cin,s) && s!="DONE")
	{
		for(int i=0;i<s.size();i++)
		{
			if(s[i]>='A' && s[i]<='Z') 
				s[i]+=32;
		    if(s[i]>='a' && s[i]<='z');
			else s.erase(i,1),i--;
		}
		x=s;
		reverse(s.begin(),s.end());
		//cout<<x<<" "<<s<<endl;
		if(x==s)
			cout<<"You won't be eaten!\n";
		else
			cout<<"Uh oh..\n";
	}

	//system("pause");
    return 0;
}
