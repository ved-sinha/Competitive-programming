#include <iostream>
using namespace std;

char letter[][10]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};

void print(int n){
    //Base case
    if(n==0)
    return;
    print(n/10);
    cout<<letter[n%10]<<" ";
}

int main() {
	// your code goes here
	int n,res;
	cin>>n;
	print(n);
	return 0;
}
