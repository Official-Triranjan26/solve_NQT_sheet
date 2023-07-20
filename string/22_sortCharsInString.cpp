// Write a program to sort characters in a string

#include<bits/stdc++.h>
using namespace std;

string sortChars(string str){
    sort(str.begin(),str.end());
    return str;
}

int main(){
    string str="zxcbg";
    cout<<sortChars(str);

    return 0;
}