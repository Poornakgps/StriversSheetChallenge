#include <bits/stdc++.h>
using namespace std;

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	map<int,int> x,y;
	for(int i=0; i<matrix.size(); i++){
		for(int j=0; j<matrix[0].size(); j++){
			if(matrix[i][j]==0){
				x[i]++,y[j]++;
			}
		}
	}
	for(int i=0; i<matrix.size(); i++){
		for(int j=0; j<matrix[0].size(); j++){
			if(x[i] || y[j]){
				matrix[i][j]=0;
			}

		}
		cout<<endl;
	}
}

void solve(){

    vector<vector<int>> matrix;
    int n,m;
    cin>>n>>m;

    for(int i=0; i<n; i++){
        vector<int> temp;

        for(int j=0; j<m; j++){
            int val;
            cin>>val;
            temp.push_back(val);
        }
        matrix.push_back(temp);
    }
    setZeros(matrix);

    for(auto it: matrix){
        for(auto it1: it){
            cout<<it1<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}