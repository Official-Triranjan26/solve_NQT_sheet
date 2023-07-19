// Prime Numbers in a given range
#include<bits/stdc++.h>
using namespace std;
bool ifPrime(int num){
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int min=2,max=10;
    for(int i=min;i<=max;i++){
        if(ifPrime(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}