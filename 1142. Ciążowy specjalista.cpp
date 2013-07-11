#include <iostream>
#include <cmath>
using namespace std;
//http://pl.spoj.com/problems/MWPZ06A/
int main() {
    ios_base::sync_with_stdio(false);
    int D;
    int wynik=0;
    float X, Y, Z;
    cin >> D;
    while(D--) {
               cin >> X >> Y >> Z;
               wynik=round(abs( (X*12)/(Z-1)-Y*12) );
               cout << wynik << endl;
               wynik=0;
    }
}
