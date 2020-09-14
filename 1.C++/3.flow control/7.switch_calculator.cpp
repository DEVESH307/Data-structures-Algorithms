//write a program to make simple calculator

#include<bits/stdc++.h>
using namespace std; 

int main() { 
   char operatr;
   int a,b;
   cout<<"enter operator (+,-,*,/,%)"<<endl;
   cin>>operatr;
   cout<<"enter two operands"<<endl;
   cin>>a>>b;

   switch(operatr){
   	case '+': cout<<a+b;break;
   	case '-': cout<<a-b;break;
   	case '*': cout<<a*b;break;
   	case '/': cout<<a/b;break;
   	case '%': cout<<a%b;break;
   	default: cout<<"enter a valid input";
   }

	return 0; 
} 
