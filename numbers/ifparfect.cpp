// Check whether a number is Perfect Number or not
#include<bits/stdc++.h>
using namespace std;

bool ifParfect(int num){
    int sum=0;
    for(int i=1;i<=num/2;i++){
        if(num%i==0){
            sum=sum+i;
        }
        else{
            continue;
        }
    }
    if(sum==num){
        
        return true;
    }
    return false;
}

int main(){
    int num=28;
    if(ifParfect(num)){
        cout<<num<<" is a parfect number"<<endl;
    }
    else{
        cout<<"not a parfect number !!"<<endl;
    }
    return 0;
}