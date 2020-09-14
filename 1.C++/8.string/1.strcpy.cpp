//string copy
#include<bits/stdc++.h>
using namespace std; 

char *strcpy(char *dest, char *src){
	// for(int i=0; (dest[i]=src[i]); i++);
	while(*dest++=*src++);
	return dest;
}

int main()
{
    char source[100], target[100];    
    cout<<"Enter source string"<<endl;    
    cin>>source;    
    strcpy(target, source);    
    cout<<"Target string is "<<target<<endl;    
    return 0;
}