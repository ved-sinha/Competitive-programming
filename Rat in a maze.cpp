#include <iostream>
using namespace std;

int count=0;

bool ratInMaze(char maze[10][10],int solution[10][10],int i,int j,int m,int n) {
    //Base case
    if(i==m && j==n) {
        solution[m][n]=1;
        //Print solution
        count++;
        for(int i=0;i<=m;i++) {
            for(int j=0;j<=n;j++) {
                cout<<solution[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return true;
    }
    
    if(i>m || j>n)
    return false;
    
    if(maze[i][j]=='X')
    return false;
    
    solution[i][j]=1;
    
    //Recursive case
    bool right=ratInMaze(maze,solution,i,j+1,m,n);
    bool down=ratInMaze(maze,solution,i+1,j,m,n);
    
    //Backtracking case
    solution[i][j]=0;
    
    if(right || down) {
    return true;
    }
    return false;
    
}


int main() {
	// your code goes here
	char  maze[10][10] = {
	                       "0000",
	                       "00X0",
	                       "000X",
	                       "0X00"
	};
	int solution[10][10]={0};
	int m=4;
	int n=4;
	bool ans=ratInMaze(maze,solution,0,0,m-1,n-1);
	if(ans==false)
	cout<<"No way possible";
	cout<<"Number of ways to reach dest is "<<count<<endl;
	return 0;
}
