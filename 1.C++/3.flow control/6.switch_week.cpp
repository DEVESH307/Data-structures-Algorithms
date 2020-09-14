#include<bits/stdc++.h>
using namespace std; 

int main() { 
   int weekday;
   cout<<"enter weekday"<<endl;
   cin>>weekday;

   switch(weekday){
   	case 0: cout<<"Monday";break;
   	case 1: cout<<"Tuesday";break;
   	case 2: cout<<"Wednesday";break;
   	case 3: cout<<"Thursday";break;
   	case 4: cout<<"Friday";break;
   	case 5: cout<<"Saturday";break;
   	case 6: cout<<"Sunday";break;
   	default: cout<<"enter a valid input";
   }

	return 0; 
} 
