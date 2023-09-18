int firstOcc(vector<int>& arr, int size, int key){
    int start = 0;
    int end = size-1;
    int mid = start+(end-start)/2;
    int ans =-1;
     while(start<=end){
         if(arr[mid] == key){
             ans = mid;
             end = mid -1;
         }
         else if(key > arr[mid]){
             start = mid+1;
         }else{
             end = mid-1;
         }
         mid = start+(end-start)/2;

     }
     return ans;
}


int lastOcc(vector<int>&arr, int size, int key){
    int start =0;
    int end = size-1;
    int mid = start+(end-start)/2;
    int ans = -1;
    while(start<=end){
        if(arr[mid]== key){
            ans = mid;
            start = mid+1;
        }
         else if(key > arr[mid]){
             start = mid+1;
         }else{
             end = mid-1;
         }
         mid = start+(end-start)/2;

     }
     return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int size, int key)
{
    // Write your code here
    pair<int,int>p;
    p.first = firstOcc(arr,size,key);
    p.second = lastOcc(arr,size,key);

    return p;
}
