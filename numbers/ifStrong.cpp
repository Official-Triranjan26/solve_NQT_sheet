// Check if a number is a strong number or not

#include<bits/stdc++.h>
using namespace std;

int getFactorial(int num){
    int ans=1;
    for(int i=1;i<=num;i++){
        ans=ans*i;
    }
    return ans;
}

bool ifStrong(int num){
    int temp=num;
    
    int digit=0;
    float ans=0;
    while(num!=0){
        digit=num%10;
        ans=ans+getFactorial(digit);
        num=num/10;
    }
    if(temp==ans){
        return true;
    }
    return false;
}

int main(){

    int num=26;
    if(ifStrong(num)){
        cout<<num<<" is a strong number "<<endl;
    }
    else{
        cout<<"not a strong number !!"<<endl;
    }

    return 0;
}