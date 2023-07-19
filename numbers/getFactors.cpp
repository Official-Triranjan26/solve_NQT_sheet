// Factors of a given number

#include<bits/stdc++.h>
using namespace std;

void getFactorial(int num){
    cout<<"factorial of "<<num<<" are : ";
    for(int i=1;i<=num;i++){
        if(num%i==0){
            cout<<i<<" ";
        }
    }
}

int main(){
    int num=100;
    getFactorial(num);
    return 0;
}