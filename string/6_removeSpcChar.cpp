// Remove characters from a string except alphabets

#include<bits/stdc++.h>
using namespace std;

string removeSpcChar(string str){
    string result="";
    for(int i=0;i<str.length();i++){
        if(int(str[i])>=65 && int(str[i])<91){
            result.push_back(str[i]);
        }
        else if(int(str[i])>=97 && int(str[i])<123){
            result.push_back(str[i]);
        }
        else{
            continue;
        }
    }

    return result;
}

int main(){
    string str="take12% *&u ^$#forward";
    cout<<str<<endl;
    cout<<removeSpcChar(str);

    return 0;
}