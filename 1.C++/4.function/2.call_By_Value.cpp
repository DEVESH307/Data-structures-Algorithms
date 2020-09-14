//call By Value

#include<bits/stdc++.h>
using namespace std; 

int fun(int x){
	x=30;
}

int main() {
	int x=20;
	fun(x);
	cout<<x<<endl;
	return 0; 
} 
