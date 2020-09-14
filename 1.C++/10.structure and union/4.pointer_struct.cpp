#include<bits/stdc++.h>
using namespace std; 

int main()
{	
	struct ex
	{
		int i;
		char c;
	};

	struct ex a,*p;
	a.i=10;
	a.c='a';
	cout<<a.i<<endl;
	cout<<a.c<<endl;
	p=&a;
	(*p).i=20;
	(*p).c='b';
	cout<<(*p).i<<endl;
	cout<<(*p).c<<endl;
	p->i=30;
	p->c='c';
	cout<<p->i<<endl;
	cout<<p->c<<endl;
    return 0;
}
