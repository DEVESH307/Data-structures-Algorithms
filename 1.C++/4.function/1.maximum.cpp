//function for Maximum of two numbers

#include<bits/stdc++.h>
using namespace std; 

int max(int a, int b){
	return (a>b) ? a : b;
}

int main() {
	int a=100, b=200;
	int maximum=max(a,b);
	cout<<"Maximum = "<<maximum<<endl;
	return 0; 
} 
