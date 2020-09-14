//intiger to string
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

char *itoa(int n, char str[]){
    int i,sign;
    if((sign=n)<0)
        n=-n;

    i=0;
    do{
        str[i++]=n%10+'0';
    }while(n/=10);

    if(sign<0)
        str[i++]='-';
    str[i]='\0';
    
    reverse(str);

    return str;
}

int main()
{
    char str[100];  
    int num;  
    // cout<<"Enter a string"<<endl;    
    // cin>>str; 
    cout<<"Enter a number"<<endl;    
    cin>>num;
    itoa(num, str);    
    cout<<"integer to string = "<<str<<endl; 
    cout<<"type of str = "<<typeid(str).name()<<endl;   
    cout<<"type of num = "<<typeid(num).name()<<endl;   
    return 0;
}