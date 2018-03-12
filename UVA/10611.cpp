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
#include<map>
#include<set>
#include<bitset>
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

	int n,q,arr[50003],l=-1,r=-1,x;
	cin>>n;
	for(int i=0;i<n;i++)
	  cin>>arr[i];
	cin>>q;
	while(q--)
	{
		cin>>x;
	    l=lower_bound(arr,arr+n,x)-arr;
		r=upper_bound(arr,arr+n,x)-arr;
		
		l--;
		if(r==n) r=-1;

		if(l==-1)cout<<"X ";
		else     cout<<arr[l]<<" ";
		if(r==-1)cout<<"X\n";
		else     cout<<arr[r]<<"\n";
	}
	// system("pause");
    return 0;
}
