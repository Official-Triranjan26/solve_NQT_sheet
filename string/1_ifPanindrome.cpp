// Check if the given String is Palindrome or not

#include<bits/stdc++.h>
using namespace std;

// string reverseString(string s){
//     string str;
//     for(int i=s.length();i>=0;i--){
//         str.push_back(s[i]);
//     }
//     cout<<"return str : "<<str<<endl;
//     return str;
// }


bool checkPalindrome(string s){
    if(s==""){
        cout<<"given string is empty !!"<<endl;
        exit(0);
    }
    int start=0;
    int end=s.length()-1;
    while(start<end){
        if(s[start]!=s[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main(){
    string str="ABCDCBA";
    if(checkPalindrome(str)){
        cout<<"given string is a palindrome "<<endl;
    }
    else{
        cout<<"not a palindrome !"<<endl;
    }
    return 0;
}