#include <iostream>
using namespace std;

int power(int a,int b){
    //Base case
    if(b==1)
    return a;
    //Recursive case
    if(b%2==0){
        int y=power(a,b/2);
        return y*y;
    }
    else return(a*power(a,b-1));
}

int main() {
	// your code goes here
	int a=-2;
	int b=3;
	int res=power(a,b);
	cout<<res;
	return 0;
}
