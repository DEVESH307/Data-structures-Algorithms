//Array pointer  
#include<bits/stdc++.h>
using namespace std; 

int main() {
	char *name[]={"Devesh","DeveshKumar","DeveshKumarJaiswal"};

	cout<<*(name+1)<<endl;

	cout<<*name+1<<endl;

	cout<<*(*(name+2)+5)<<endl;

	return 0;
} 
