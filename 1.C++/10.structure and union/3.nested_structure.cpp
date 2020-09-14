#include<bits/stdc++.h>
using namespace std; 

int main()
{	
	struct ex
	{
		int i;
		char c;
	};

	struct ex1
	{
		struct ex x;
		struct ex y; 
	};

	struct ex1 t;
	t.x.i=10;
	t.x.c='a';
	t.y.i=20;
	t.y.c='b';

	cout<<t.x.i<<endl;
	cout<<t.x.c<<endl;
	cout<<t.y.i<<endl;
	cout<<t.y.c<<endl;
    return 0;
}
