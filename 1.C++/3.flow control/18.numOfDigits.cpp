//To count number of digits in a number
#include<bits/stdc++.h>
using namespace std; 

int main() {
	int num,count=0;
	cout<<"Enter number"<<endl;
	cin>>num;
	while(num){
		num/=10;
		count++;
	}
	cout<<"Total number of digits = "<<count<<endl;

	return 0; 
} 
