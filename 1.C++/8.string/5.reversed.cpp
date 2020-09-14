//reverse
#include<bits/stdc++.h>
using namespace std; 

char *reverse(char *str){
    char c;
    int i,j;
    for(i=0,j=strlen(str)-1; i<j; i++,j--){
        c=*(str+i);
        *(str+i)=*(str+j);
        *(str+j)=c;
    }
    return str;
}

int main()
{
    char str[100];    
    cout<<"Enter a string"<<endl;    
    cin>>str;    
    reverse(str);    
    cout<<"reversed string is "<<str<<endl;    
    return 0;
}