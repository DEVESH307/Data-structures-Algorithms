#include<bits/stdc++.h>
using namespace std; 

int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int arr[n],x;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cin>>x;
        int upper = upper_bound(arr, arr + n, x) - arr;
        cout<<upper<<endl;
    }
    return 0;
}