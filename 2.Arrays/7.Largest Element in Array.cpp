#include<bits/stdc++.h>
using namespace std; 

int main(){
    int T;
    cin>>T;
    while(T--){
        int n,max;
        max=INT_MIN;
        cin>>n;
        int A[n];
        for (int i = 0; i < n; i++)
        {
            cin>>A[i];    
        }
        for (int i = 0; i < n; i++)
        {
            if(A[i]>max){
                max=A[i];
            }
       }
       cout<<max<<endl;
    }
    return 0;
}