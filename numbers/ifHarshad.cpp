// Check if the given number is Harshad

#include<bits/stdc++.h>
using namespace std;

bool ifHarshad(int num){
    int temp=num;
    int sum=0;
    while(temp!=0){
        int digit=temp%10;
        sum=sum+digit;
        temp=temp/10;
    }
    if(num%sum==0){
        return true;
    }
    return false;
}

int main(){
    int num=379;
    if(ifHarshad(num)){
        cout<<num<<" is a harshad number"<<endl;
    }
    else{
        cout<<"not a harshad number !!"<<endl;
    }
    return 0;
}