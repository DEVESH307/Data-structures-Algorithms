#include<bits/stdc++.h>
using namespace std; 

int main()
 {
     int T;
     cin>>T;
     while(T--){
         int n,position;
         cin>>n>>position;
         int A[n];
         for(int i=0;i<n;i++){
             cin>>A[i];
         }
         cout<<A[position]<<endl;         
     }
    return 0;
}