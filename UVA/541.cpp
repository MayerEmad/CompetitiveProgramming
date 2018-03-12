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
	int n;
	int arr[100][100],rs[100]={0},cs[100]={0},row,col,cnt= 0;
    int in=1;
	while(cin>>n)
	{
		if(!n)break;
		row=-1,col=-1,cnt=0;
	    for(int i=0;i<n;i++)cs[i]=0;
	    for(int i=0;i<n;i++)rs[i]=0;
		in=1;
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
			{
				cin>>arr[i][j];
				rs[i]+=arr[i][j];	cs[j]+=arr[i][j];
			}

	    for(int i=0;i<n;i++)
		{
			if(rs[i]%2==1)       row=i,cnt++;
			if(cs[i]%2==1)       col=i,cnt++;
			if(cnt>2) break;
		}

		 if(cnt>2 || (row>-1 && col==-1) || (row==-1&& col>-1) ) in=0;

		 if(in==1 && row==-1 && col==-1 )   cout<<"OK\n";
		 else if(in==1 && cnt==2)           cout<<"Change bit ("<<row+1<<","<<col+1<<")\n";
		 else                               cout<<"Corrupt\n";
	}
	//system("pause");
    return 0;
}
