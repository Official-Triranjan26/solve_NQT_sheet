// LCM of two numbers 

// LCM(a,b)=|(a*b)| / GCD(a,b)

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

int getLCM(int a,int b){
    int GCD=getGCD(a,b);
    int LCM =(a*b)/GCD;
    return LCM;
}

int main(){
    cout<<getLCM(6,4);
    return 0;
}
