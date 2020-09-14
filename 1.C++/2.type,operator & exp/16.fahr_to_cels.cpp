// fahrenheit to celcius conversion table
// range of fahrenheit (0-300)

#include<bits/stdc++.h>
using namespace std;

int main(){

	float fahr, cels;
	int lower=32,
		upper=212,
		step=10;

	fahr=lower;
	cout<<"fahrenheit "<<"celcius"<<endl;
	while(fahr<=upper){
		cels=(5.0/9.0)*(fahr-32.0);
		printf("%3.0f \t %6.1f\n",fahr,cels);
		//cout<<fahr<<"\t\t"<<cels<<endl;
		fahr+=step;
	}


	return 0;
}