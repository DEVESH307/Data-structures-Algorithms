//Recursion A(n)

#include<bits/stdc++.h>
using namespace std; 

void A(int n){
	if(n>0){
		A(n-1);
		cout<<n<<endl;
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
