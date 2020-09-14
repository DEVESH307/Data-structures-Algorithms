#include <bits/stdc++.h>

using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i, sum = 0;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for (i = 0; i < n; i++) {
            sum+=arr[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}