//find factorial of a number
#include<bits/stdc++.h>
using namespace std; 

int main() {
	int num;
	unsigned long long fact=1;
	cout<<"enter an integer"<<endl;
	cin>>num;
	if(num<0)
		cout<<"negative number factorial not possible"<<endl;
	else{
		for(int i=2;i<=num;i++)
			fact*=i;
		cout<<"factorial of "<<num<<" = "<<fact<<endl;
	}
	return 0; 
} 
