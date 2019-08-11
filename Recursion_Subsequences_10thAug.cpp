#include <iostream>
using namespace std;

void subsquence(char *in,char *out,int i,int j) {
    //Base
    if(in[i]==NULL) {
        out[j]=NULL;
        cout<<out<<",";
        return;
    }
    
    //Rec case
    //Where current charachter is include
    out[j]=in[i];
    subsquence(in,out,i+1,j+1);
    //curret charachter is excluded
    subsquence(in,out,i+1,j);
}

int main() {
	// your code goes here
	char in[100];
	cin>>in;
	char out[100];
	subsquence(in,out,0,0);
	return 0;
}
