#include <bits/stdc++.h>

using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n],b[n];
        int a_score=0,b_score=0;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (i = 0; i < n; i++) {
            cin>>b[i];
        }
        for (i = 0; i < n; i++) {
            if(a[i]>b[i])
                a_score++;
            else if(a[i]<b[i])
                b_score++;
        }
        cout<<a_score<<" "<<b_score<<endl;
    }
    return 0;
}