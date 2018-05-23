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

	int arr[100],t,n;
	cin>>t;
	while(t--)
	{
		int cnt=0;
		cin>>n;
		for(int i=0;i<n;i++) cin>>arr[i];

		for(int i=0;i<n;i++)
			for(int j=i+1;j<n;j++)
			{
				if(arr[i]>arr[j]) cnt++,swap(arr[i],arr[j]);
			}
			cout<<"Optimal train swapping takes "<<cnt<<" swaps.\n";
	}

	//system("pause");
    return 0;
}

