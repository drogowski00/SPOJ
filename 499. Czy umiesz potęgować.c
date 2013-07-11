#include "stdio.h"
#include "stdlib.h"
//http://pl.spoj.com/problems/PA05_POT/

// calculates a^b mod m
int power_modulo_fast(long long int a, long long int b)
{
int i;
int result = 1;
long long int x = a%10;

for (i=1; i<=b; i<<=1)
{
x %= 10;
if ((b&i) != 0)
{
result *= x;
result %= 10;
}
x *= x;
}
return result;
}

int main() {

int a, b, i, t;
scanf("%d", &t);

for (i = 0; i < t; ++i) {
scanf("%d %d", &a, &b);
printf("%d\n", power_modulo_fast(a, b));
}

return 0;
}