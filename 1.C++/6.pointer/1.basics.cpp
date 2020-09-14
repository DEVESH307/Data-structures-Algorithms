//pointers basics
#include<bits/stdc++.h>
using namespace std; 
		
int main() {
	char a='A';
	int b=3;
	char *p;
	int *q;
	p=&a;
	q=&b;
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<p<<endl;
	cout<<q<<endl;
	cout<<*p<<endl;
	cout<<*q<<endl;

	return 0;
	
} 
