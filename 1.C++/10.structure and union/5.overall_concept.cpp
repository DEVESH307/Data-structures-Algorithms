#include<bits/stdc++.h>
using namespace std; 
// struct node fun(struct node n1,struct node n2);

int main()
{	
	struct node
	{
		int i;
		int *c;
	};

	struct node a[2],*p;
	int b[2]={30,40};
	p=&a[0];
	a[0].i=10;
	a[1].i=20;
	a[0].c=b;
	//Run one line at a time
	
	cout<<++p->i<<endl;
	// cout<<(++p)->i<<endl;
	// cout<<(p++)->i<<endl;
	// cout<<*p->c<<endl;
	// cout<<*p->c++<<endl;
	// cout<<(*p->c)++<<endl;
	// cout<<*p++->c<<endl;

    return 0;
}
