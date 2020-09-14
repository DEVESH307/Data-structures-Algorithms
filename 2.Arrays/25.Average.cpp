#include <bits/stdc++.h>

using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i, sum = 0;
        cin >> n;
        int arr[n];
        int avg[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for (i = 0; i < n; i++) {
            sum+=arr[i];
            avg[i]=sum/(i+1);
            cout<<avg[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}