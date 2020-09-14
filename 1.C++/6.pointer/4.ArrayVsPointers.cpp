//Array vs pointers 
#include<bits/stdc++.h>
using namespace std; 
		
int main() {
	int a[5];
	int *p;
	p = &a[0];

	cout<<"Size of interger "<<sizeof(int)<<endl;
	cout<<"Enters 5 numbers"<<endl;
	for(int i=0;i<5;i++){
		cin>>a[i];
	}

	cout<<"Output"<<endl;
	for(int i=0;i<5;i++){
		cout<<p+i<<endl;
		cout<<a+i<<endl;
		cout<<&a[i]<<endl;
		cout<<*(p+i)<<endl;
		cout<<a[i]<<endl;
		cout<<p[i]<<endl;
		
	}

	return 0;
	
} 
