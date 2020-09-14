#include<bits/stdc++.h>
using namespace std; 

int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        string str[n];
        int max_length=0;
        string max_length_string;
        for (int i = 0; i < n; i++)
        {
            cin>>str[i];    
        }
        for (int i = 0; i < n; i++)
        {
            if(str[i].length()>max_length){
                max_length=str[i].length();
                max_length_string=str[i];
            }
       }
        cout<<max_length_string<<endl;
    }
    return 0;
}