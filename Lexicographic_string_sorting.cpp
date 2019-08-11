#include<bits/stdc++.h>
using namespace std;

int main() {
	// Very important program for sorting strings in Lexicographic order
	int n;
	cin>>n;
	char str[n][20];
	for(int i=0;i<n;i++)
	cin>>str[i];
	for(int i=0;i<n;i++)
	{
	    for(int j=i+1;j<n;j++)
	    {
	  // If i will not make it false then lets say for ved and bat it will give
	  // False because ved is greater then bat and hence if condition will not 
	  // get evaluated.
	    if( !lexicographical_compare(str[i],str[i]+strlen(str[i]),str[j],str[j]+strlen(str[j])))
	        {
	            char s[20];
	            strcpy(s,str[i]);
	            strcpy(str[i],str[j]);
	            strcpy(str[j],s);
	        }
	     }
	}
	
	for(int i=0;i<n;i++)
	cout<<str[i]<<endl;
	return 0;
}


