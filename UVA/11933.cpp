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
 
	int n,cnt=0,A,B;
	string x,y,z;
	while(cin>>n&&n)
	{
		y="",z="",cnt=0;
		bitset<32>a(n);
		x=a.to_string();
		for(int i=0;i<32;i++)
		{
			if(x[i]=='1') 
				{
					x=x.substr(i,32-i); break;
			    }
		}
	    for(int i=x.size()-1;i>=0;i--)
		{
			if(x[i]=='1')
			{
				cnt++;
				if(cnt&1)
				{
					y='1'+y;
					z='0'+z;
				}
				else
				{
                    y='0'+y;
					z='1'+z;
				}
			}
			else 
				y='0'+y , z='0'+z;
		}
		bitset<32>b(y);
		A=b.to_ulong();
		bitset<32>c(z);
		B=c.to_ulong();
		cout<<A<<" "<<B<<"\n";
		//cout<<y<<" "<<z<<endl;
	}
	//system("pause");
    return 0;
}
