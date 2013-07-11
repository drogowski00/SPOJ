#include <stdio.h>
//http://pl.spoj.com/problems/EUCGAME/
int quick_nwd_by_modulo (int a, int b) {
    while (a*b != 0)
    {
     if (a > b) a = a % b;
     else b = b % a;
    }
if (a > b)
return 2*a;
else return 2*b;
}



int main() {

int t, i, a, b;
scanf("%d", &t);

for (i = 0; i < t; i++) {
	scanf("%d %d", &a, &b);
	printf("%d\n", quick_nwd_by_modulo(a,b));
}
return 0;
}


