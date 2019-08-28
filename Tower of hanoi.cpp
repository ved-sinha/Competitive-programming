#include <iostream>
using namespace std;

void towerOfHanoi(int n,char src,char dest, char helper){
    //Base case
    if(n==0)
    return;
    
    //Rec case
    towerOfHanoi(n-1,src,helper,dest);
    cout<<"Move "<<n<<"th disk from "<<src<<" to "<<dest<<endl;
    towerOfHanoi(n-1,helper,dest,src);
}

int main() {
	// your code goes here
	int n;
	cin>>n;
	towerOfHanoi(n,'A','C','B');
	return 0;
}
