//Tower of Hanoi

#include<bits/stdc++.h>
using namespace std; 

void TOH(int n, char from, char to, char use){
	if(n>=1){
		TOH(n-1, from, use, to);
		cout<<"move disc "<<n<<" from "<<from<<" to "<<to<<endl;
		TOH(n-1,use, to, from);
	}
}

		
int main() {
	int n;
	cout<<"Enter the value of n"<<endl;
	cin>>n;
	TOH(n, 'X', 'Y', 'Z');
	return 0; 
} 
