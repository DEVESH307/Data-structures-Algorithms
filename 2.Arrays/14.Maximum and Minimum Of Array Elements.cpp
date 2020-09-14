#include<bits/stdc++.h>
using namespace std; 

int main(){
    int T;
    cin>>T;
    while(T--){
        int n,max,min;
        max=INT_MIN;
        min=INT_MAX;
        cin>>n;
        int A[n];
        for (int i = 0; i < n; i++)
        {
            cin>>A[i];    
        }
        for (int i = 0; i < n; i++)
        {
            if(A[i]>max)
                max=A[i];
            if(A[i]<min)
                min=A[i];
       }
       cout<<max<<" "<<min<<endl;
    }
    return 0;
}