#include<bits/stdc++.h>
using namespace std;
int calculatePower(int digit,int power){
//base case
if(power==0) return 1;
 if(power%2==0){
    int result=calculatePower(digit,power/2);
    return result*result;
 }else{
    int result=calculatePower(digit,(power-1)/2);
    return digit*result*result;
 }
}
int main(){
    int res = calculatePower(2,5);
    cout<<res;

    return 0;
}
