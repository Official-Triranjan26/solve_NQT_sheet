// Check whether a given number is even or odd
#include<bits/stdc++.h>
using namespace std;

bool ifEven(int num){
    if(num%2==0){
        return true;
    }
    return false;
}

int main(){
    int num=1;
    if(ifEven(num)){
        cout<<num<<" is a even number"<<endl;
    }
    else{
        cout<<num<<" is a odd number "<<endl;
    }

    return 0;
}