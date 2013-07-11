#include<stdio.h>
//http://www.spoj.com/LO13/problems/FIB/
int fib(int n) {
if (n == 0) return 0;
if (n == 1) return 1;
if (n > 1)  return fib(n-1) + fib(n-2);
}

int main() {

int t,n,m;
scanf("%d",&t);

while (t--) {
scanf("%d ",&n);
scanf("%d",&m);
printf("%d\n",(fib(n))%m);
}

return 0;
}

