//pointers Operations 
#include<bits/stdc++.h>
using namespace std; 
	
void strcpy(char *s, char *t){
	while(*t++=*s++);
}

int main() {
	char a[10]="Devesh";
	char b[sizeof(a)];

	strcpy(a, b);
	cout<<b<<endl;

	return 0;
} 
