#include<bits/stdc++.h>
using namespace std;
int sumOfDigit(int n){
    if(n<=9 && n>=0) return n; //Base Case
    
    return sumOfDigit(n/10) + n%10;
    }
int main(){

    int result = sumOfDigit(1214);
    cout<<result;
    return 0;
}
