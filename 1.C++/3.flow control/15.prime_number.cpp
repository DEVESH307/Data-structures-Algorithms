//break when see negative int or range to 15
#include<bits/stdc++.h>
using namespace std; 

int main() {
	int num,flag=0;
	cout<<"enter a positive integer"<<endl;
	cin>>num;
	for(int i=2;i<sqrt(num);++i){
	
		if(num%i==0){
			flag=1;
			break;
		}
	}
	if(flag)
		cout<<"Not Prime"<<endl;
	else
		cout<<"Prime"<<endl;
	return 0; 
} 
