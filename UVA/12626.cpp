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
	int k,m=0,a=0,r=0,g=0,t=0,i=0,cnt;
	cin>>k;
	while(k--)
	{
		cin>>s;
		m=0,a=0,r=0,g=0,t=0,i=0;

		for(int j=0;j<s.size();j++)
		{
			     if(s[j]=='M')m++;
			else if(s[j]=='A')a++;
			else if(s[j]=='R')r++;
			else if(s[j]=='I')i++;
			else if(s[j]=='T')t++;
			else if(s[j]=='G')g++;
		}
		//cout<<m<<" "<<a<<" "<<r<<" "<<t<<endl;
		r=r/2,a=a/3;
		cnt=min( min( min(m,a),min(r,i) ) , min(g,t) );
		cout<<cnt<<endl;
	}
	//system("pause");
    return 0;
}
