#include <bits/stdc++.h>

using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i, flag = 0;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for (i = 0; i < n/2; i++) {
            if(arr[i]!=arr[n-i-1]){
                flag=1;
                break;
            }
        }
        if(flag==1)
            cout<<"NOT PERFECT"<<endl;
        else
            cout<<"PERFECT"<<endl;
    }
    return 0;
}