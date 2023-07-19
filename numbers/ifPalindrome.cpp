// Check if a number is Palindrome or Not

#include<bits/stdc++.h>
using namespace std;

int reverse(int num){
    int x=0;
    int digit;
    while(num!=0){
        digit=num%10;
        num=num/10;
        x=x*10+digit;
        cout<<x<<endl;
    }
    return x;
}
bool ifPallindrome(int num){
    int revNum=reverse(num);
    if(num==revNum){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int num=1;
    if(ifPallindrome(num)){
        cout<<"The number is a valid pallindrome "<<endl;
    }
    else{
        cout<<"not a valid pallindrome !!"<<endl;
    }
    return 0;
}