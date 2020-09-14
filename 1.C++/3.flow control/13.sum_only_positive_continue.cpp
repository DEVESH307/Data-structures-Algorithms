//read 15 integer and print only sum of positive integer
#include<bits/stdc++.h>
using namespace std; 

int main() {
	int num,sum=0;
	for(int i=0;i<15;i++){
		cout<<"enter a integer"<<endl;
		cin>>num;
		if(num<0)
			continue;
		sum+=num;
	}
	cout<<"Sum = "<<sum<<endl;


	return 0; 
} 
