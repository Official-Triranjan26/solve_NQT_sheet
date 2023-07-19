// Check if a number is prime or not
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
    int num=9;
    if(ifPrime(num)){
        cout<<num<<" is a prime number"<<endl;
    }
    else{
        cout<<num<<" is not a prime number !!"<<endl;
    }
    return 0;
}