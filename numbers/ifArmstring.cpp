// Check if a number is Armstrong Number or not

#include<bits/stdc++.h>
using namespace std;
int getLen(int num){
    int count=0;
    while(num!=0){
        count=count+1;
        num=num/10;
    }
    return count;
}

bool ifArmstrong(int num){
    int temp=num;
    int length=getLen(num);
    double ans=0.0;
    while(num!=0){
        int digit=num%10;
        ans+=pow(double(digit),double(length));
        num=num/10;
    }
    if(ans==temp){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int num=170;
    if(ifArmstrong(num)){
        cout<<num<<" is an armstrong number"<<endl;
    }
    else{
        cout<<"not an amstrong number !!"<<endl;
    }
    return 0;
}