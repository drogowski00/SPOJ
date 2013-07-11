#include<stdio.h>
//http://pl.spoj.com/problems/WYMIANA/
int main() {
	int x, y;
	scanf("%d %d",&x,&y);

	x = x ^ y;
	y = x ^ y;
	x = x ^ y;

	printf("%d %d",x,y);
	return 0;
}