// Find the Position of a Substring within a String

#include<bits/stdc++.h>
using namespace std;

int findSubStr(string str1,string str2){
    if(str1.find(str2)<0){
        return -1;
    }
    else{
        return str1.find(str2);
    }
}

int main(){
    string str1="hello";
    string str2="ell";

    cout<<findSubStr(str1,str2);

    return 0;
}