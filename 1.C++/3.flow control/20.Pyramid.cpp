/*Pyramid

	    *
	  * * *
	* * * * *
  * * * * * * *
*/
#include<bits/stdc++.h>
using namespace std; 

int main() {
	int numOfRows;
	cout<<"Enter number of rows"<<endl;
	cin>>numOfRows;


	for(int i=1;i<=numOfRows;i++){
		for(int j=i;j<numOfRows;j++){
			cout<<"  ";

		}
		for(int k=1;k<2*i;k++){
			cout<<"* ";
		}
		cout<<endl;

	}

	return 0; 
} 
