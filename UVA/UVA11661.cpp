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
	    int L;
    while (cin >> L, L != 0)
    {
        string S;
        cin >> S;

        int minDis = 1e7;
        int lastR=-1e7, lastD=-1e7;
       
        for (int i = 0; i < L; ++i)
        {
    
            if (S[i] == 'Z')
            {
                minDis = 0;
                break;
            }
            else if (S[i] == 'R')
            {
                minDis = min(minDis, i - lastD);
                lastR = i;
            }
           
            else if (S[i] == 'D')
            {
                minDis = min(minDis, i - lastR);
                lastD = i;
            }
        }
        cout << minDis << endl;
    }
	//system("pause");
    return 0;
}
