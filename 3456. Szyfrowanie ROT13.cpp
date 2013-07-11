#include <iostream>
using namespace std;
string s;
int flaga;
//http://pl.spoj.com/problems/PASCHAR5/

int main() {
    while(true) {
               getline(cin,s);
               if(cin.eof()) flaga = 1;
               for(int i=0;i<s.size();i++) {
                       if(s[i]>='a' && s[i]<='m')
                       s[i]=s[i]+13;
                       else if(s[i]>='n' && s[i]<='z')
                       s[i]=s[i]-13;
                       else if(s[i]>='A' && s[i]<='M')
                       s[i]=s[i]+13;
                       else if(s[i]>='N' && s[i]<='Z')
                       s[i]=s[i]-13;
                       else if(s[i]>='0' && s[i]<='4')
                       s[i]=s[i]+5;
                       else if(s[i]>='5' && s[i]<='9')
                       s[i]=s[i]-5;
                       }
               cout << s << endl;

               if (flaga == 1)
               break;
    }
return 0;
}

