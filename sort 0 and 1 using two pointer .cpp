#include<bits/stdc++.h>
using namespace std;
int SortZerosandOnes(vector<int> &v){
     int left_ptr=0;
     int right_ptr=v.size()-1;
     while(right_ptr>left_ptr){
        if(v[right_ptr]==0&&v[left_ptr]==1){
            v[right_ptr--]=1;
            v[left_ptr++]=0;
        }
        if(v[right_ptr]==1){
            right_ptr--;
        }
        if(v[left_ptr]==0){
            left_ptr++;
        }
     }

}
int main(){
    int n;
    cin>>n;
      vector<int>v;
      for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
      }
        SortZerosandOnes(v);
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
      
      return 0;
}

// WITHOUT USING FUNCTION

#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin >>n;
   vector<int>v;
   for(int i=0;i<n;i++){
   int ele;
   cin>>ele;
    v.push_back(ele);
   } 

int left_ptr=0;
int right_ptr=v.size()-1;
while(right_ptr>left_ptr){
    if(v[right_ptr]==0&&v[left_ptr]==1){
        v[right_ptr--]=1;
        v[left_ptr++]=0;
    }
    if(v[left_ptr]==0){
        left_ptr++;
    }
    if(v[right_ptr]==1){
        right_ptr--;
    }

}
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}

    
}
