#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   for(int line=0;line<n;line++){
    for(int i=0;i<n;i++){
        if(line==n/2){
            cout<<"*";
        }else if(i==n/2){
            cout<<"*";
        }else{
            cout<<" ";
        }
    }
    cout<<endl;
   }
}