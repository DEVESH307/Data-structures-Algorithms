//sum of natral numbers
#include<bits/stdc++.h>
using namespace std; 

int main() {
	int n,sum=0;
	cout<<"enter the total natural numbers"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
		sum+=i;
	cout<<"sum of natural numbers = "<<sum<<endl;

	return 0; 
} 
