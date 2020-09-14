#include<bits/stdc++.h>
using namespace std;
 
int main() {
   int a = 21;
   int c ;
 
   // Value of a will not be increased before assignment.
   c = a++;   
   cout << "Value of a++ is :" << a++ << endl ;
 
   // After expression value of a is increased
   cout << "Value of a is :" << a << endl ;
 
   // Value of a will be increased before assignment.
   c = ++a;  
   cout << "Value of ++a is  :" << ++a << endl ;
   return 0;
}