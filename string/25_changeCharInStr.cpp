// Change case of each character in a string

#include<bits/stdc++.h>
using namespace std;

string changeChar(string str){
    for(int i=0;i<str.length();i++){
        if(int(str[i])>=65 && int(str[i])<91){
            str[i]=char(int(str[i])+32);
        }
        else if(int(str[i])>=97 && int(str[i])<123){
            str[i]=char(int(str[i])-32);
        }
    }
    return str;
}

int main(){
    string str="take u forward IS Awesome";
    cout<<changeChar(str);

    return 0;
}