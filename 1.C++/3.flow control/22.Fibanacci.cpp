//Fibanacci

#include<bits/stdc++.h>
using namespace std; 

int main() {
	int first, second, numOfTerms, sum;
	cout<<"Enter number of terms"<<endl;
	cin>>numOfTerms;
	cout<<"Enter first number"<<endl;
	cin>>first;
	cout<<"Enter second number"<<endl;
	cin>>second;
	cout<<"Fibanacci sequence: "<<first<<" "<<second<<" ";
	for(int i=2;i<numOfTerms;i++){
		sum=first+second;
		cout<<sum<<" ";
		first=second;
		second=sum;
	}
	return 0; 
} 
