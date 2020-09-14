//string count
#include<bits/stdc++.h>
using namespace std; 

int strlen(char *str){
	int i;
	for(i=0; *str++; ++i);
	return i;
}

int main()
{
    char str[100];  
    int count;  
    cout<<"Enter a string"<<endl;    
    cin>>str;    
    count = strlen(str);    
    cout<<"Number of character = "<<count<<endl;    
    return 0;
}