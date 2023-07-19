// Program to find sum of GP Series
#include<bits/stdc++.h>
using namespace std;

float getSum(float a,float r,float n){
    float sum=0;
    for(int i=0;i<n;i++){
        if(i==0){
            sum=sum+a;
        }
        else{
            sum=sum+(a*pow(r,float(i)));
        }
    }
    return sum;
}

int main(){
    float a=3,r=5,n=2;
    cout<<"sum of GP series : "<<getSum(a,r,n);
    return 0;
}