#include<bits/stdc++.h>
using namespace std; 

int main() { 
	// int constant 
	const int intVal = 10; 

	// Real constant 
	const float floatVal = 4.14; 

	// char constant 
	const char charVal = 'A'; 

	// string constant 
	const string stringVal = "ABC"; 
	
	cout << "Integer Constant: " << intVal << "\n"; 
	cout << "Floating point Constant: " << floatVal << "\n"; 
	cout << "Character Constant: "<< charVal << "\n"; 
	cout << "String Constant: "<< stringVal << "\n"; 



	// PREFIXES 
    cout << 213   << '\n'  // decimal integer literal 
         << 0213  << '\n'  // Octal integer literal 
         << 0x213A << '\n' // hexadecimal integer literal 
         << 0b101  << '\n' // binary integer literal 
  
         // SUFFIXES 
         // long long literal 
         << 1234567890123456789LL << '\n'
  
         // unsigned long long literal 
         << 12345678901234567890ull << '\n'
  
         // automatic conversion of unsigned long long even 
         // without long long prefix 
         << 12345678901234567890u; 



         cout << 12345678901245LL <<'\n'
  
         // long long int literal digit separator 
         << 12'345'678'901'245LL <<'\n'
  
         // binary literal digit separator 
         << 0b1000'111'0 <<'\n'
  
         // hexadecimal literal digit separator 
         << 0X12A'2b4; 
	
	return 0; 
} 
