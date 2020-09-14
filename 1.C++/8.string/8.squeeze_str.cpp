//remove a perticular char from string
#include<bits/stdc++.h>
using namespace std; 

char *squeeze(char s[], char c){
    int i,j;
    for(i=j=0; s[i]; i++)
        if(s[i]!=c)
            s[j++]=s[i];
    s[j]='\0';
    return s;
}

int main()
{
    char str[100];  
    cout<<"Enter a string "<<endl;    
    cin>>str; 
    squeeze(str,'c');    
    cout<<"squeezed string: "<<str<<endl;      
    return 0;
}