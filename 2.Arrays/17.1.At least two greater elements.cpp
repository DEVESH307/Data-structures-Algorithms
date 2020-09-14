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

        int first,second;
        first=second=INT_MIN;

        for (int i = 0; i < n; i++)
        {
            if(A[i] > first){
                second=first;
                first=A[i];
            }
            else if(A[i] > second)
                second=A[i];
       }

        for (int i = 0; i < n; i++) 
            if (A[i] < second) 
                cout << A[i] << " ";
        cout<<endl; 


    }
    return 0;
}