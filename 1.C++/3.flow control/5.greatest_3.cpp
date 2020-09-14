#include<bits/stdc++.h>
using namespace std; 

int main() { 
   int n1,n2,n3;
   cout<<"enter three numbers"<<endl;
   cin>>n1>>n2>>n3;

   if(n1>n2 && n1>n3)
   	cout<<"greatest number = "<<n1<<endl;

   else if(n2>n3 && n2>n1)
   	cout<<"greatest number = "<<n2<<endl;
   

   else
   	cout<<"greatest number = "<<n3<<endl;

	return 0; 
} 
