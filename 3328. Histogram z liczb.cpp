#include <iostream>
#include <cmath>
#include <stdio.h>
#define SZEROKOSC 30
using namespace std;
//http://pl.spoj.com/problems/PASTAB4/
int main() {
  int tab[21] = {0};
  int n;
  int ile;
  float max;
  int k;

  while (scanf("%d", &n) != EOF) {
  tab[n+10]++;
  }

  max = 0;
    for (int i=0; i < 21; i++)
        if (tab[i]>max)
            max=tab[i];

for (int i = -10; i <= 10; ++i) {
  printf("%4d:|",i);
  ile = round(SZEROKOSC*tab[i+10] / max);
     for ( k = 0; k < ile; ++k) {
          printf("*");

     }
     for (int j = k; j < SZEROKOSC; ++j) {
          printf(" ");
     }
 printf("|\n");
}

return 0;
}
