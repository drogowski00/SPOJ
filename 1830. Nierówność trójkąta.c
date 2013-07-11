#include <stdio.h>
//http://pl.spoj.com/problems/KC003/
int main() {

float a, b, c;

while (scanf("%f %f %f",&a,&b,&c) != EOF) {
if ((a < (b + c)) && (b < (c + a)) && (c < (a + b)))
printf("1\n");
else
printf("0\n");
}
return 0;
}