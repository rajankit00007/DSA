#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[] , int size , int key){
int start = 0;
int end = size-1;
int mid = (start+end)/2;
while(start<=end){    
    if(arr[mid]==key){
        return mid;
    }
    if(key>arr[mid]){
        start = mid+1;
    }else{
        end = mid-1;
    }

    mid = (start + end)/2; 
}
return -1;
}
 int main(){
    int even[6] = {2,5,9,10,24,45};
    int odd[5] = {2,6,8,14,24};

    int evenIndex = binarySearch(even , 6 , 24);
    cout<< "index of 24 is:" << evenIndex <<endl;

    int oddIndex = binarySearch(odd , 5, 14);
    cout<<"index of 14 is:" <<oddIndex <<endl;

    return 0;
 }
