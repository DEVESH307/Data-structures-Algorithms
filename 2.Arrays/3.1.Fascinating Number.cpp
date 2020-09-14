// Initial Template for C++

#include <bits/stdc++.h>

using namespace std;

//User function template for C++
class Solution{
public:
	
	bool fascinating(int n) {
        string str;
        int freq[10]={0};

        str=""+to_string(n)+to_string(2*n)+to_string(3*n);
        
        for(int i=0; i<str.length();i++){
            int digit = str[i]-'0';
            if(freq[digit]>0)
                return false;
            else
                freq[digit]++;
        }

        for(int i = 1; i < 10; i++){
            if(freq[i]==0)
                return false;
        }
        return true;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.fascinating(n);
        if (ans) {
            cout << "Fascinating\n";
        } else {
            cout << "Not Fascinating\n";
        }
    }
    return 0;
} 