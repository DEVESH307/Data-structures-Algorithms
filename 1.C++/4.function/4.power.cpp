//swap two numbers

#include<bits/stdc++.h>
using namespace std; 

double power(int base, int exponent){
	double p = 1;
	while(exponent){
		p*=base;
		--exponent;
	}
	return p;
}
int main() {
	int base, exponent;
	double pow;

	cout<<"Enter base"<<endl;
	cin>>base;
	cout<<"Enter exponent"<<endl;
	cin>>exponent;

	pow = power(base,exponent);

	cout<<base<< " to power "<<exponent<<" = "<<pow<<endl;
	return 0; 
} 


