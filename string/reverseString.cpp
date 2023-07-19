// Reverse a String

#include<bits/stdc++.h>
using namespace std;

string reverse(string str){
    int start=0;
    int end=str.length()-1;

    while(start<end){
        swap(str[start],str[end]);
        start++;
        end--;
    }
    return str;
}

int main(){
    string str="hello";
    cout<<str<<endl;
    cout<<reverse(str)<<endl;

    return 0;
}