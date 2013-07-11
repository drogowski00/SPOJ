#include <iostream>
using namespace std;
//http://pl.spoj.com/problems/WI_GRAY/
int main()
{
   unsigned long long int m, n, x, y, *bin;
   cin>> n >> m;
   bin = new unsigned long long int [n];
   for(unsigned long long int i = 0; i < n; i++) bin[i] = 0;
   y = m >> 1;
   x = m ^ y;
   if(x == 0)
   {
      for(unsigned long long int i = 0; i < n; i++) cout << 0;
   }
   else
   {   
      for(unsigned long long int i = 0; x > 0; i++, x /= 2) bin[i] = x % 2;
      for(unsigned long long int i = n; i > 0; i--) cout << bin[i - 1];
   }
   cout << endl;
   return 0;
}