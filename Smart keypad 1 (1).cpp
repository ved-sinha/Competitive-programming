#include <iostream>
using namespace std;

char keypad[][10]={ "", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };

void smartKeypad(char *in,char *out,int i,int j){
    
    //Base case
    if(in[i]==NULL){
        out[j]=NULL;
        cout<<out<<endl;
        return;
    }
    
    //Recursive case
    int digit=in[i]-'0';
    
    if(digit==0){
        smartKeypad(in,out,i+1,j);
    }
    
    for(int k=0;keypad[digit][k]!='\0';k++){
        out[j]=keypad[digit][k];
        smartKeypad(in,out,i+1,j+1);
    }
    
    
}


int main() {
	// your code goes here
	char in[100];
	char out[100];
	cin>>in;
	smartKeypad(in,out,0,0);
	return 0;
}
