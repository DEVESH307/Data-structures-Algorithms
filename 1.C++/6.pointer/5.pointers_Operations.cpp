//pointers Operations 
#include<bits/stdc++.h>
#define NULL 0
using namespace std; 
		
int main() {
	char *c;
	int *p,*q;

	cout<<c<<endl;
	cout<<p<<endl;
	cout<<q<<endl;

	p=q;
	cout<<p<<endl;
	cout<<q<<endl;


	p=(int *)c;
	cout<<c<<endl;
	cout<<p<<endl;

	if (p<q)
		cout<<q-p<<endl;
	else
		cout<<p-q<<endl;

	p==NULL;
	cout<<p<<endl;
	cout<<++p<<endl;
	cout<<--p<<endl;

	return 0;
	
} 
