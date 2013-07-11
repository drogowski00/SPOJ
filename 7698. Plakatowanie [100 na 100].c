#include<stdio.h>
//http://pl.spoj.com/problems/OI15_PLA/
int main() {
int k[900000], s=100, i, n, m, w = 0, t;
scanf("%d\n", &n);
for (i = 0; i < n; i++) {
scanf("%d %d\n", &t, &m);
while (s > 0 && k[s - 1] > m) {
s--;
}
if (s == 0 || k[s - 1] < m) {
w++;
k[s++] = m;
}
}
printf("%d\n",w);
return 0;
}



