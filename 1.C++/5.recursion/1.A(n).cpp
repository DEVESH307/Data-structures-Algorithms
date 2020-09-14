//Recursion A(n)

#include<bits/stdc++.h>
using namespace std; 

void A(int n){
	if(n>0){
		cout<<(n-1)<<endl;
		A(n-1);
	}
}

int main() {
	int n;
	cout<<"Enter the value of n"<<endl;
	cin>>n;
	A(n);
	return 0; 
} 
