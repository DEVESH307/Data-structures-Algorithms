#include<bits/stdc++.h>
using namespace std; 

int main()
{	
	int a;
	float b,c;
	char ch, str[20];
	unsigned int d;
	printf("Enter character input: Value of ch=\n");
	scanf("%c",&ch);
	printf("Enter integer input: Value of a=\n");
	scanf("%d",&a);
	printf("Enter float input: Value of b=\n");
	scanf("%f",&b);
	printf("Enter float input in exponent format: Value of c=\n");
	scanf("%e",&c);
	printf("Enter string input: Value of str=\n");
	scanf("%s",str);
	printf("Enter unsigned integer input: Value of d=\n");
	scanf("%u",&d);
	printf("Display all variables\n");
	printf("%c,%d,%f,%e,%s,%u,%o,%x",ch,a,b,c,str,d,d,d);
    return 0;
}
