#include<bits/stdc++.h>
using namespace std;

void sortZerosandOnes(vector<int> &v){
    int zeros_count = 0;
    for(int ele:v){
        if(ele == 0){
        zeros_count++;
        }
    }
    for(int i=0; i<v.size();i++){
        if(i<zeros_count){
            v[i]=0;
        }else{
            v[i]=1;
        }

    }

}

int main(){
    int n;
    cin>>n;

    vector<int>v;

    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    
    sortZerosandOnes(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

//without using function
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
    int ele;
    cin>>ele;
    v.push_back(ele);
    }

    int count_zeros =0;
    for(int i=0;i<v.size();i++){
        if(v[i]==0){
            count_zeros++;
        }
    }
    for(int i=0;i<v.size();i++){
        if(i<count_zeros){
            v[i]=0;
        }else{
            v[i]=1;
        }
        cout<<v[i];
    }
}
