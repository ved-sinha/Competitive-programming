#include <iostream>
using namespace std;

int fu3(int *a,int n)
{
    int cnt[64]={0};
    for(int j=0;j<n;j++)
    {
        int i=0;
        int no=a[j];
        while(no>0)
        {
            cnt[i]+=(no&1);
            no=no>>1;
            i++;
        }
    }
    
    int p=1;
    int ans=0;
    for(int i=0;i<64;i++)
    {
        cnt[i]=cnt[i]%3;
        ans+=cnt[i]*p;
        p=p<<1;
    }
    cout<<ans;
}

int main() {
	// your code goes here
	int a[]={7,7,3,4,2,4,3,3,4,7};
	int n=sizeof(a)/sizeof(int);
	fu3(a,n);
	return 0;
}
