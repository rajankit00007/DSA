#include <bits/stdc++.h> 
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int m, int n) {
	// Write your code here.
	int row[m]={0};
	int col[n]={0};
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(matrix[i][j]==0){
				row[i]=1;
				col[j]=1;
			}
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(row[i]||col[j]){
				matrix[i][j]=0;
			}
		}

	}
	return matrix;
}