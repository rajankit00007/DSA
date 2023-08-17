#include<bits/stdc++.h>
using namespace std;
int calculatePower(int digit,int power){
//base case
if(power==0) return 1;
return digit*calculatePower(digit, power-1);
}

int main()
{    int result = calculatePower(3,0);
    cout<< result;
return 0;
}
