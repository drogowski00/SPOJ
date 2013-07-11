#include <iostream>
#include <string.h>
#include <stdio.h>
#include <algorithm>
#include <cmath>
using namespace std;
//http://pl.spoj.com/problems/DCZPROST/
int main() {

long double XLD, YLD, XPG, YPG;
long long int w=0;
long double a, b, cz1, cz2, cz3, cz4;

while (cin >> XLD >> YLD >> XPG >> YPG) {
a=XPG;
b=YPG;

cz1 = floor(a/2) * floor(b/2);

for (long double i = 1; i <= floor(a/2); ++i)
cz1 += min(i, ceil(b/2));

for (long double i = 1; i <= floor(b/2); ++i)
cz1 += min(i, ceil(a/2));

a=XLD; 
b=YPG;

cz2 = floor(a/2) * floor(b/2);
for (long double i = 1; i <= floor(a/2); ++i)
cz2 += min(i, ceil(b/2));

for (long double i = 1; i <= floor(b/2); ++i)
cz2 += min(i, ceil(a/2));

a=XPG;
b=YLD;

cz3 = floor(a/2) * floor(b/2);

for (long double i = 1; i <= floor(a/2); ++i)
cz3 += min(i, ceil(b/2));

for (long double i = 1; i <= floor(b/2); ++i)
cz3 += min(i, ceil(a/2));

a=XLD;
b=YLD;

cz4 = floor(a/2) * floor(b/2);

for (long double i = 1; i <= floor(a/2); ++i)
cz4 += min(i, ceil(b/2));

for (long double i = 1; i <= floor(b/2); ++i)
cz4 += min(i, ceil(a/2));

w = cz1 - cz2 - cz3 + cz4;
cout << w << endl;
}
return 0;
}

