// Associativity is not used in the below program. 
// Output is compiler dependent. 

#include<bits/stdc++.h>
using namespace std;

int x = 0; 
int f1() 
{ 
	x = 5; 
	return x; 
} 
int f2() 
{ 
	x = 10; 
	return x; 
} 


int main() 
{ 
	int p = f1() + f2(); 
	cout<<x<<endl;



	int a; 
    a = 1, 2, 3; // Evaluated as (a = 1), 2, 3 
    cout<<a<<endl;



    int b = 10, c = 20, d = 30; 
  
    // (c > b > a) is treated as ((c  > b) > a), associativity of '>' 
    // is left to right. Therefore the value becomes ((30 > 20) > 10) 
    // which becomes (1 > 20) 
    if (d > c > b) 
        cout<<"TRUE"<<endl; 
    else
        cout<<"FALSE"<<endl;  


	return 0; 
}
