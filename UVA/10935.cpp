//#define _CRT_SECURE_NO_WARNINGS
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
//#define ll long long
//#define ld long double
using namespace std;
void winter_is_coming()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL );
}
int main()
{
	int n,x;
	while(cin>>n)
	{
		if(n==0)break;
		if (n==1)
		{
			cout<<"Discarded cards:\n";
			cout<<"Remaining card: 1\n";
			continue;
		}
		vector<int>v(n);
		vector<int>d;
		for(int i=0;i<n;i++) v[i]=1+i;
			while(v.size()>=2)
			{
				x=v[0];
				d.push_back(x);
				v.erase(v.begin());
				//cout<<x<<"-->"<<v.size();
				x=v[0];
		        v.erase(v.begin());
				//cout<<"   "<<x<<"->"<< v.size()<<endl;
				v.push_back(x);
			}
         cout<<"Discarded cards: ";
		 for(int i=0;i<d.size();i++) 
			 {
				 cout<<d[i];
				 if(i<d.size()-1)cout<<", " ;
		     }
		 cout<<endl<<"Remaining card: "<<v[0]<<endl;
	}
	//system("pause");
    return 0;
}