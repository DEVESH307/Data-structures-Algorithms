//string comp
#include<bits/stdc++.h>
using namespace std; 

int strcmp(char *s, char *t){
	while(*s==*t){
		if(*s == '\0' && *t == '\0')
			break;
		s++;
		t++;
	}
	return *s-*t;
}

// int strcmp(char *s, char *t){
// 	int i = 0;
//   	while(s[i] == t[i])
//   	{
//   		if(s[i] == '\0' && t[i] == '\0')
// 	  		break;
// 		i++;
// 	}
// 	return s[i] - t[i];
// }

int main()
{
    char s[100], t[100];  
    int n;  
    cout<<"Enter first string"<<endl;    
    cin>>s;  
    cout<<"Enter second string"<<endl;    
    cin>>t;
    n = strcmp(s, t);    
    cout<<"compared string value is "<<n<<endl;    
    return 0;
}