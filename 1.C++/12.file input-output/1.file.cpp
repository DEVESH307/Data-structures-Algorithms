#include<bits/stdc++.h>
using namespace std; 

int main()
{	
	FILE *fp;
	int len;
	fp = fopen("file.txt","r");
	if(fp==NULL){
		cout<<"Error opening file"<<endl;
	}
	fseek(fp,0,SEEK_END);
	len=ftell(fp);
	fclose(fp);
	cout<<"Total size of file.txt = "<<len<<" bytes"<<endl;
	return 0;
}
