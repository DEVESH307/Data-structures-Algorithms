//Palindrom

#include<bits/stdc++.h>
using namespace std; 

int main() {
	long long int num, temp, remainder, reversedNumber=0;
	cout<<"Enter number"<<endl;
	cin>>num;
	temp=num;
	while(temp){
		remainder=temp%10;
		reversedNumber=reversedNumber*10+remainder;
		temp/=10;
	}
	(reversedNumber==num) ? cout<<"Palindrom"<<endl : cout<<"Not a Palindrom"<<endl;
	return 0; 
} 
