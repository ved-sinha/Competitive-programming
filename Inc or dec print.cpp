#include <iostream>
using namespace std;

void dec(int n){
    //Base case
    if(n==0)
    return;
    cout<<n<<" ";
    //Rec case
    dec(n-1);
}

void inc(int n){
    //Base case
    if(n==0)
    return;
    //Rec case
    inc(n-1);
    cout<<n<<" ";
}

int main() {
	// your code goes here
	int n;
	cin>>n;
	inc(n);
	cout<<endl;
	dec(n);
	return 0;
}
