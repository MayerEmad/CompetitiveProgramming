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
int n,q;
int arr[10002],brr[10001];
int search(int x)
{
	int l,h,m;
	l=0,h=n-1;
	while(l<=h)
	{
		m=(h+l)/2;
		     if(arr[m]<x) l=m+1;
		else if(arr[m]>x) h=m-1;
		else if(arr[m]==x)
			 {
				 m=lower_bound(arr,arr+n,arr[m])-arr;
				 return m;
		     }
	}
	return -1;
}
int main()
{
	winter_is_coming();
	int x,cnt=1,ind;
	while(cin>>n>>q && n)
	{
	  for(int i=0;i<n;i++)cin>>arr[i];
	  sort(arr,arr+n);
	  for(int i=0;i<q;i++)cin>>brr[i];
	  cout<<"CASE# "<<cnt++<<":\n";

	  for(int i=0;i<q;i++)
	   {
		   x=brr[i];
		  ind=search(x);
		  if(ind>-1)
		  {
			  cout<<x<<" found at "<<ind+1<<"\n";
		  }
		  else
              cout<<x<<" not found\n";
	   }
	}
   // system("pause");
    return 0;
}
