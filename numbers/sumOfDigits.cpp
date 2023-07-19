// sum of digits of a number

#include<bits/stdc++.h>
using namespace std;

void sunOfDigits(int num){
    int sum=0;

    while(num!=0){
        int digit=num%10;
        sum=sum+digit;
        num=num/10;
    }
    cout<<"sum of all the digits of given number is : "<<sum<<endl;
}

int main(){
    sunOfDigits(123);

    return 0;
}