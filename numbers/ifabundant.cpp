// Check if the number is an abundant number or not

#include<bits/stdc++.h>
using namespace std;

bool ifAbundant(int num){
    int sum=0;

    for(int i=1;i<=num/2;i++){
        if(num%i==0){
            sum=sum+i;
        }
    }
    if(sum>num){
        return true;
    }
    return false;
}

int main(){
    int num=21;
    if(ifAbundant(num)){
        cout<<num<<" is an abundant number"<<endl;
    }
    else{
        cout<<"not an abundant number"<<endl;
    }
    return 0;
}
