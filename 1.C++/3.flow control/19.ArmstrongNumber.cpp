//Armstrong Number
#include<bits/stdc++.h>
using namespace std; 

int main() {
	int num,temp,remainder,n=0,result=0;
	cout<<"Enter number"<<endl;
	cin>>num;
	temp=num;
	while(temp){
		temp/=10;
		n++;
	}
	temp=num;
	while(temp){
		remainder=temp%10;
		result+=pow(remainder,n);
		temp/=10;
	}

	(result==num) ? cout<<"Armstrong Number"<<endl : cout<<"Not an Armstrong Number"<<endl;

	return 0; 
} 
