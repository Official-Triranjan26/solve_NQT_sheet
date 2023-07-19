// Find all Palindrome numbers in a given range
#include<bits/stdc++.h>
using namespace std;

bool ifPalindrome(int num){
    int temp=num;
    int ans=0;
    while(num!=0){
        int digit=num%10;
        ans=ans*10+digit;
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
    int min = 10 , max = 50;
    for(int i=min;i<=max;i++){
        if(ifPalindrome(i)){
            cout<<i<<" ";
        }
        else{
            continue;
        }
    }

    return 0;
}