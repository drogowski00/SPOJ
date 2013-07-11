#include<iostream>
#include<algorithm>
using namespace std;
//http://pl.spoj.com/problems/NWW/
unsigned long long n,k,w,x;

//FUNKCJA ZWRACAJĄCA NWD DWÓCH LICZB PODANYCH NA WEJŚCIU
unsigned long long nwd(unsigned long long a, unsigned long long b)
{
    if (a<b)
       swap (a,b);
    unsigned long long p;
    for (;;)
    {
        p=b%a;
        if (p==0)
           return a;
        swap(b,a);
        swap(p,a);
    }
}
int main()
{
       cin >>n;                                                                 //wczytanie liczby zestawów
       for(unsigned long long i=0 ;i<n;i++)
       {
               cin >>k;                                                         //wczytanie liczby liczb w zestawie
               if (k!=0)                                                        //dalsze instrukcje wykonują sie jeżeli liczb jest przynajmniej jedna
               {
                  cin >>w;                                                      //wczytaj pierwszą liczbę
                  for (unsigned long long j=1;j<k;j++)                          //powtarzaj o jeden raz mniej niz liczb w zestawie petle
                  {
                      cin>>x;                                                   //wczytaj liczbe
                      w= w/nwd(w,x)*x;                                          //zmiennnej 'wynik' przyporządkuj nww wczesniejszego wyniku i nowej liczby
                  }
                      cout <<w<<endl;                                           //wypisz wynik dla zestawu
               }
       }

return 0;
}
