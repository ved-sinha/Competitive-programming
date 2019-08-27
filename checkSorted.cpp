#include <iostream>
using namespace std;

bool checkSorted(int *a,int start,int end){
    //Base case
    if(start==end)
    return 1;
    
    if(a[start]>a[start+1])
    return 0;
    
    //Rec case
    checkSorted(a,start+1,end);
}

int main() {
	// your code goes here
	int n;
	int a[50];
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	bool res=checkSorted(a,0,n-1);
	if(res)
	cout<<"Sorted";
	else
	cout<<"NO";
	return 0;
}
