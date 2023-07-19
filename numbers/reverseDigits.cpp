// Reverse digits of a number
#include<bits/stdc++.h>
using namespace std;

void reverseDigits(int num){
    int ans=0;
    while(num!=0){
        int digit=num%10;
        ans=ans*10+digit;
        num=num/10;
    }
    cout<<"reversed number is : "<<ans<<endl;
}
int main(){
    int num=1;
    reverseDigits(num);
    return 0;
}