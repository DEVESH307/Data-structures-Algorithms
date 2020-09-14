//pointers basics
#include<bits/stdc++.h>
using namespace std; 

void swap(int *x, int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

		
int main() {
	int a,b;
	a = 1;
	b = 2;	

	swap(&a,&b);

	cout<<"After swaping a = "<<a<<endl;
	cout<<"After swaping b = "<<b<<endl;

	return 0;
	
} 
