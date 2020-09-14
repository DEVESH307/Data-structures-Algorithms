// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int PalinArray(int a[], int n);
int Palindrom(int num);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		cout<<PalinArray(a,n)<<endl;
	}
}// } Driver Code Ends
// /*Complete the function below*/
// bool Palindrom(int num){
// 	int temp,reverse,remainder;
// 	temp = num;
// 	reverse=0
// 	while(temp){
// 		remainder=temp%10;
// 		reverse=reverse*10+remainder;
// 		temp/=10;
// 	}
// 	if(reverse==num)
// 		return true;
// 	return false; 
// }


/*Complete the function below*/
int PalinArray(int a[], int n){
	for(int i=0;i<n;i++){
		int temp,reverse=0,remainder;
		temp=a[i];
		while(temp){
		remainder=temp%10;
		reverse=reverse*10+remainder;
		temp/=10;
		}
		if(reverse!=a[i]){
			return 0;
		}
	}
	return 1;
}