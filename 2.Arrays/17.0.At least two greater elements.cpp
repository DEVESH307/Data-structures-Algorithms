#include<bits/stdc++.h>
using namespace std; 

int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int A[n];
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        sort(A,A+n);
        for(int i=0;i<n-2;i++){
            cout<<A[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}