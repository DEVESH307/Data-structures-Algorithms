//string concatenation
#include<bits/stdc++.h>
using namespace std; 

void strcat(char *original, char *add)
{
   while(*original)
      original++; 
   while(*original++=*add++);
}

int main()
{
    char original[100], add[100];    
    cout<<"Enter source string"<<endl;    
    cin>>original;
    cout<<"Enter additional string"<<endl;    
    cin>>add;    
    strcat(original, add);    
    cout<<"concatenated string is "<<original<<endl;    
    return 0;
}