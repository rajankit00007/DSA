#include <bits/stdc++.h> 
void reverseArrayHelper(int left, int right, vector<int>&arr){
	if(left>=right) return;
	
	reverseArrayHelper (left+1,right-1,arr);
	swap(arr[left],arr[right]);
}
void reverseArray(vector<int> &arr , int m)
{
	// Write your code here.
	 reverseArrayHelper(m+1,arr.size()-1,arr);
}
