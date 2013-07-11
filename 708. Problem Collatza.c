#include <stdio.h>
//http://pl.spoj.com/problems/PTCLTZ/
int collatz (int n) {
int kroki = 0;
while (n > 1) {
	if (n % 2 == 0) {
	kroki++;
	n /= 2;
	}
	else {
	kroki++;
	n = 3*n+1;
	}
}
return kroki;
}


int main() {

int t, s, i;
scanf("%d", &t);

for (i = 0; i < t; i++) {
scanf("%d", &s);
printf("%d\n", collatz(s));
}

return 0;
}

