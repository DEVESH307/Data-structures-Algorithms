//break when see negative int or range to 15
#include<bits/stdc++.h>
using namespace std; 

int main() {
	int num,sum=0;
	for(int i=0;i<15;i++){
		cout<<"enter a integer"<<endl;
		cin>>num;
		if(num<0)
			break;
		sum+=num;
	}
	cout<<"Sum = "<<sum<<endl;


	return 0; 
} 
