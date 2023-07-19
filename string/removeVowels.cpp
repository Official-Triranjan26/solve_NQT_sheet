// Remove all vowels from the String

#include<bits/stdc++.h>
using namespace std;

string removeVowel(string str1){
    string str2="";
    for(int i=0;i<str1.length();i++){
        if(
            tolower(str1[i])=='a' ||
            tolower(str1[i])=='e' ||
            tolower(str1[i])=='i' ||
            tolower(str1[i])=='o' ||
            tolower(str1[i])=='u' 
        ){
            continue;
        }
        else{
            str2.push_back(str1[i]);
        }
    }
    cout<<str2<<endl;
    return str2;
}

int main(){

    string str="I am very happy today";
    cout<<removeVowel(str)<<endl;

    return 0;
}