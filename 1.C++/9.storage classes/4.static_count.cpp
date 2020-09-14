#include<bits/stdc++.h>
using namespace std; 

int countFunCall(){
	static int count=0;
	return ++count;
}

int main()
{
	int num;
	for (int i=0; i<5; i++)	 
		num = countFunCall();   
	cout<<"No of times fn called = "<<num<<endl;  
    return 0;
}
