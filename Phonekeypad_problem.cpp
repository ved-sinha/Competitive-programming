#include <iostream>
#include<cstring>
using namespace std;

char keypad[][10]={"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};

void printkeyboard(char *in,char *out, int i,int j) {
    //Base case
    if(in[i]==NULL) {
        out[j]=NULL;
        cout<<out<<" ";
        return;
    }
    //Recursive case
    int digit=in[i]-'0';
    //1 and 0 is mapped to NULL so for 123 or 2113 nothing will be printed
    if(digit==1 || digit ==0) {
        printkeyboard(in,out,i+1,j);
    }
    for(int k=0;keypad[digit][k]!='\0';k++) {
        out[j]=keypad[digit][k];
        printkeyboard(in,out,i+1,j+1);
    }
}



int main() {
	// your code goes here
	char in[100];
	char out[100];
	
	cin>>in;
	
	printkeyboard(in,out,0,0);
	
	return 0;
}
