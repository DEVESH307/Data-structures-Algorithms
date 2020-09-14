//wheather two array have an element in common
#include<bits/stdc++.h>
using namespace std; 

int isCommon(int a[], int b[], int m, int n){
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			if(a[i]==b[j])
				return 1;
	return 0;
}


int main() {
	int a[6]={10,20,30,40,50,60};
	int b[6]={5,10,15,20,25,30};
	int common;
	common = isCommon(a,b,6,6);
	if(common==1)
		cout<<"Atleast one common element"<<endl;
	else
		cout<<"No common element"<<endl;

	return 0;
} 
