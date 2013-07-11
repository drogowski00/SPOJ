#include <iostream>
#include <cstring>
#include <stdio.h>
//http://pl.spoj.com/problems/TLCS/
using namespace std;

int c[1001][1001];
char b[1001][1001];
char x[1001], y[1001];
int t, n, m;

void LCS_LENGTH() {
	int m = strlen(x);
	int n = strlen(y);
	for(int i=1; i<=m; i++)
		c[i][0]=0;
	for(int j=0; j<=n; j++)
		c[0][j]=0;
	for(int i=1; i<=m; i++) {
		for(int j=1; j<=n; j++) {
			if(x[i-1]==y[j-1]) {
				c[i][j]=c[i-1][j-1]+1;
				b[i][j]=3;
			}
			else if(c[i-1][j]>=c[i][j-1]) {
				c[i][j]=c[i-1][j];
				b[i][j]=1;
			}
			else {
				c[i][j]=c[i][j-1];
				b[i][j]=2;
			}
		}
	}
return;
}

void printLCS(char* x, char* y, int len1, int len2) {
	if(len1==0 || len2==0)
		return ;
	if(b[len1][len2]==3) {
		printLCS(x, y, len1-1, len2-1);
		printf("%c %d %d\n", x[len1-1], len1, len2);
	}
	else if(b[len1][len2]==1)
		printLCS(x, y, len1-1, len2);
	else printLCS(x, y, len1, len2-1);
}

int main() {

	scanf("%d", &t);
	for(int i=0; i<t; i++) {
		scanf("%d", &n);  scanf("%s", x);
		scanf("%d", &m);  scanf("%s", y);

		if (n < 915 && m < 900) {
			LCS_LENGTH();
			printf("case %d Y\n", i+1);
			int k = n;
			while(c[k][m]==c[k-1][m]) k--;
			printf("%d\n", c[k][m]);
			printLCS(x, y, k, m);
		}
		else {
		printf("case %d N\n", i+1);
		}
	}
	return 0;
}

