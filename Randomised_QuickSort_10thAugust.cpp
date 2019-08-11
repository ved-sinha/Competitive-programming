#include <iostream>
#include<cstdlib>
using namespace std;

void shuffle(int *a,int s,int e) {
    srand(time(NULL));
    int i,j,temp;
    for(int i=e;i>0;i--) {
        j=rand()%(i+1);
        swap(a[i],a[j]);
    }
}

int partition(int *a,int s,int e) {
    int i=s-1;
    int j=s;
    int pivot=a[e];
    for(;j<e;j++) {
        if(a[j] <= pivot) {
            i++;
            swap(a[j],a[i]);
        }
    }
    swap(a[i+1],a[e]);
    return i+1;
}

void quicksort(int *a,int s,int e) {
    if(s>=e) 
    return;
    
    int p=partition(a,s,e);
    quicksort(a,s,p-1);
    quicksort(a,p,e);
}

int main() {
	// your code goes here
	int n=5;
	int a[]={50,4,100,6,6};
	shuffle(a,0,4);
	for(int i=0;i<5;i++)
	{
	    cout<<a[i]<<" ";
	}
	cout<<endl;
	quicksort(a,0,4);
	for(int i=0;i<5;i++)
	{
	    cout<<a[i]<<" ";
	}
	return 0;
}
