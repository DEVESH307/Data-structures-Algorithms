//swap two numbers

#include<bits/stdc++.h>
using namespace std; 

void swap(int *, int *);

int main() {
	int a, b;
	cout<<"Enter two numbers"<<endl;
	cin>>a>>b;

	swap(&a,&b);

	cout<<"After swaping a = "<<a<<" and b = "<<b<<endl;
	return 0; 
} 

void swap(int *x, int *y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
