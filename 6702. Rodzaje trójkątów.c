#include <stdio.h>
#include <stdlib.h>
//http://pl.spoj.com/problems/RODZ_TRO/
int main(int argc, char *argv[]) {
  int a = 0, b = 0, c = 0, temp = 0;

  while(scanf("%d %d %d", &a, &b, &c)!= EOF) {
			  if (a > c) { temp = a; a = c; c = temp; }
			  if(b > c){ temp = b; b = c; c = temp;}
              if((a + b) <= c) { printf("brak\n"); }
              else if( (a*a) + (b*b) == (c*c) ){ printf("prostokatny\n"); }
              else if( (a*a) + (b*b) > (c*c) ){ printf("ostrokatny\n"); }
              else if( (a*a) + (b*b) < (c*c) ){ printf("rozwartokatny\n"); }
    }
return 0;
}
