#include <stdio.h>
int t[1000],n,tmp[1000],x,i,k=0,tt;
//http://pl.spoj.com/problems/TPERM2/
int main() {

scanf("%d",&tt);

while(tt--){
scanf("%d",&n);

if (n==0) continue;

for(i=1;i<=n;i++)
t[i-1]=i;

while(1){
for(i=0;i<n;i++) {
	if(t[i]==1)
	printf("a");
	else if (t[i]==2)
	printf("b");
	else if (t[i]==3)
	printf("c");
	else if (t[i]==4)
	printf("d");
	else if (t[i]==5)
	printf("e");
	else if (t[i]==6)
	printf("f");
	else if (t[i]==7)
	printf("g");
	else if (t[i]==8)
	printf("h");
	else if (t[i]==9)
	printf("i");
}

     printf("\n");

int i = n - 1;

     while (i > 0 && t[i - 1] >= t[i])
        i--;
		
      if (i == 0)
        break;

      int j = i;
	  
      while (j < n && t[j] > t[i - 1])
        j++;
        j--;

      int pom;
      pom = t[i - 1]; t[i - 1] = t[j]; t[j] = pom;

    k=0;
    for(x=i; x<n; ++x) {
        tmp[k]=t[x];
        k++;
    }
    k=0;
    for(x=n-1; x>=i; --x) {
        t[x]=tmp[k];
        k++;
    }
}
}
return 0;
}