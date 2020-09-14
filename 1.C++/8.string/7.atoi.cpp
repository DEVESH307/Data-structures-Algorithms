//string to intiger
#include<bits/stdc++.h>
using namespace std; 

int atoi(char s[]){
    int n=0, i=0;
    int sign = 1;
    if(s[0]=='-'){
        sign=-1;
        i++;
    }
    for(; s[i]>='0'&&s[i]<='9';i++)
        n=n*10 + s[i]-'0';
    return sign*n;

}

int main()
{
    char str[100];  
    int num;  
    cout<<"Enter a number string "<<endl;    
    cin>>str; 
    num = atoi(str);    
    cout<<"string to integer = "<<num<<endl;   
    cout<<"type of str = "<<typeid(str).name()<<endl;   
    cout<<"type of num = "<<typeid(num).name()<<endl;    
    return 0;
}