#include<bits/stdc++.h>
using namespace std;
int sortedsquare(vector<int> &v){
    vector<int>ans;
    int left_ptr = 0;
    int right_ptr = v.size()-1;
    while(left_ptr<=right_ptr){
        if(abs(v[left_ptr]) < abs(v[right_ptr])){
            ans.push_back(v[right_ptr]*v[right_ptr]);
            right_ptr--;
        }else{
            ans.push_back(v[left_ptr]*v[left_ptr]);
            left_ptr++;
        }
    }
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
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
     sortedsquare(v);
      return 0;


     
}

// without function

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    vector<int>ans;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    int left_ptr=0;
    int right_ptr=v.size()-1;
    while(left_ptr<=right_ptr){
        if(abs(v[left_ptr])<abs(v[right_ptr])){
            ans.push_back(v[right_ptr]*v[right_ptr]);
            right_ptr--;
        }else{
            ans.push_back(v[left_ptr]*v[left_ptr]);
            left_ptr++;
        }
    }
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
     

}