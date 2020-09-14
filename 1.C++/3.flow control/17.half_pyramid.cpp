/*half pyramid
*
* *
* * *
* * * *
* * * * *
*/
#include<bits/stdc++.h>
using namespace std; 

int main() {
	int numOfRows;
	cout<<"Enter number of rows"<<endl;
	cin>>numOfRows;


	for(int i=0;i<numOfRows;i++){
		for(int j=0;j<=i;j++){
			cout<<"* ";
		}
		cout<<endl;

	}

	return 0; 
} 
