#include<bits/stdc++.h>
using namespace std;

//strlen: return length of string

int strlen(char s[]){
	int i=0;
	if(s[i]=='\0')
		return 0;
	else{
		while(s[i]!='\0'){
			i++;
		}
	return i;

	}
}


int main()
{
	// char 'a';
	// char "a";

    char str[] = "Devesh Kumar Jaiswal"; 
	int i;
	i = strlen(str);
	cout<<i<<endl;
	cout<<'a'+10<<endl;//no \0
	cout<<"a"<<endl;//end with \0 & can't use "a"+10
	return 0;
}