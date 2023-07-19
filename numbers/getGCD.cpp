// Find GCD of two numbers

#include<bits/stdc++.h>
using namespace std;

int getGCD(int a ,int b){
    vector<int> arr;
    for(int i=1;i<=a;i++){
        if(a%i==0 && b%i==0){
            arr.push_back(i);
        }
    }
    int size=arr.size();
    return arr[size-1];
}

int main(){
    cout<<getGCD(6,3);

    return 0;
}