#include <cstdio>
#include <string.h>

using namespace std;
//http://pl.spoj.com/problems/KNUTH_PI/
int   n, m, k, q, pi[1000001];
char  P[1000001]; // P[] - wzorzec o dlugosci m
char  T[1000001]; // T[] - tekst o dlugosci n

void CPF() // obliczanie funkcji prefiksowej Knutha
{
	int m = strlen(P);
	pi[0] = 0; q = 0;
	printf("%d ", pi[0]);
        for(k=1; k<m; k++) {
                //niezmiennik: q=pi[k-1]
                while(q>0 && P[k] != P[q]) {
                q=pi[q-1];
                }

                if(P[k] == P[q]) {
                 pi[k] = ++q;
                 printf("%d ", pi[k]);
                }

                else {
                pi[k] = 0;
                printf("%d ", pi[k]);
                }
        }
}


int main() {
    int Test;
    scanf("%d\n", &Test);
	
    while(Test--) {
        scanf("%s", P);
        CPF();
        printf("\n");
    }
return 0;
}
