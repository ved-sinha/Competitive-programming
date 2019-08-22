#include <bits/stdc++.h>
#include<vector>
using namespace std;

void solve(vector<int> &a,int start,int end,vector<int> &temp, set<vector<int>> &ans, vector<vector<int>> &res,unordered_map<int,int> &mp,int sum) {
    
    if(sum<0 || start>end) return;
    if(sum==0){
        ans.insert(temp);
        return;
    }
    
    solve(a,start+1,end,temp,ans,res,mp,sum);
    if(mp[a[start]]>0){
        temp.push_back(a[start]);
        mp[a[start]]--;
        solve(a,start,end,temp,ans,res,mp,sum-a[start]);
        temp.pop_back();
        mp[a[start]]++;
    }
}

vector<vector<int>> combinational_sum(vector<int> &a,int sum){
    sort(a.begin(),a.end());
    unordered_map<int,int> mp;
    for(int i:a)
    mp[i]++;
    
    vector<int> temp;
    set<vector<int>> ans;
    vector<vector<int>> res;
    
    int n=a.size();
    
    solve(a,0,n-1,temp,ans,res,mp,sum);
    
    for(auto it=ans.begin();it != ans.end(); it++){
        res.push_back(*it);
    }
    
    return res;
}

int main() {
	// your code goes here
	int n,x;
	vector<int>a;
	int sum;
	cin>>n;
	for(int i=0;i<n;i++){
	    cin>>x;
	    a.push_back(x);
	}
	cin>>sum;
    vector<vector<int>> res=combinational_sum(a,sum);
    
    int row= res.size();
    
    
    for(int i=0;i<row;i++){
        for(int j=0;j<res[i].size();j++){
          cout<<res[i][j]<<" ";       
        }
        cout<<endl;
    }
	return 0;
}
