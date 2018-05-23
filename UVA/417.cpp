#define _CRT_SECURE_NO_WARNINGS
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
#include<stack>
#include<map>
#include<set>
#include<bitset>
#define ll long long
#define ld long double
using namespace std;
void winter_is_coming()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
}
int main()
{
	winter_is_coming();
    
	map<string,int>mp;
	string s="";
	int val=1;

	for(int i=0;i<26;i++)
	    s+=('a'+i),mp[s]=val++,s="";

	for(int i=0;i<26;i++)
		for(int j=i+1;j<26;j++)
		{
			s+=char('a'+i),s+=char('a'+j);
			mp[s]=val++;
			s="";
		}

	for(int i=0;i<26;i++)
		for(int j=i+1;j<26;j++)
			for(int k=j+1;k<26;k++)
		   {
			   s+=('a'+i),s+=('a'+j),s+=('a'+k);
			   mp[s]=val++;
			   s="";
		   }
	for(int i=0;i<26;i++)
		for(int j=i+1;j<26;j++)
			for(int k=j+1;k<26;k++)
				for(int x=k+1;x<26;x++)
		        {
			      s+=('a'+i),s+=('a'+j),s+=('a'+k),s+=('a'+x);
			      mp[s]=val++;
			      s="";
		        }
	 for(int i=0;i<26;i++)
		for(int j=i+1;j<26;j++)
			for(int k=j+1;k<26;k++)
				for(int x=k+1;x<26;x++)
				   for(int y=x+1;y<26;y++)
		           {
			         s+=('a'+i),s+=('a'+j),s+=('a'+k),s+=('a'+x),s+=('a'+y);
			         mp[s]=val++;
			         s="";
		           }
				   string x;
				   while(cin>>x)
				   {
					   cout<<mp[x]<<"\n";
				   }

    //system("pause");
    return 0;
}
 