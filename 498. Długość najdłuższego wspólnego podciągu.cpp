#include<iostream>
#include<string>
using namespace std;
//http://pl.spoj.com/problems/LENLCS/
string a,b;
int lcs[1001][1001];

int main() {
 int x, smiec;

    cin >> x;

    for (int k = 0; k < x; ++k) {
    cin >> smiec;
	cin >> a;
    cin >> smiec;
	cin >> b;

	int n=a.size(), m=b.size(); // n,m  <= 1000

	for (int i=1; i<=n; i++)
	{
		for (int j=1; j<=m; j++)
		{
			if ( a[i-1] == b[j-1] ) 
			{
				lcs[i][j] = lcs[i-1][j-1]+1;
			}
			else
			{
				lcs[i][j] = max( lcs[i-1][j] , lcs[i][j-1] );
			}
		}
	}
	cout << lcs[n][m] << endl;
    }

return 0;
}
