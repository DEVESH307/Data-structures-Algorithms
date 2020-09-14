#include<bits/stdc++.h>
using namespace std; 

int main()
 {
    int adress,max_length;
    string str[2]={"devesh","dev"};
   for (int i = 0; i < 2; i++)
       {
            if(str[i].length()>max_length){
                max_length=str[i].length();
                adress=i;
            }
       }
       cout<<str[adress]<<endl;
    return 0;
}