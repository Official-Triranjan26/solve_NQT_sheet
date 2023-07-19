// Check if two Strings are anagrams of each other

#include<bits/stdc++.h>
using namespace std;

bool ifAnagarms(string str1,string str2){
    if(str1.length()!=str2.length()){
        cout<<"strings of different length"<<endl;
        return false;
    }
    map<char,int>map1;
    map<char,int>map2;

    for(int i=0;i<str1.length();i++){
        map1[str1[i]]++;
        map2[str2[i]]++;
    }
    for(int i=0;i<str1.length();i++){
        if(map1[str1[i]]!=map2[str2[i]]){
            return false;
        }
    }
    return true;
}

int main(){
    string str1="aaab";
    string str2="abab";

    if(ifAnagarms(str1,str2)){
        cout<<"given 2 strings are anagram"<<endl;
    }
    else{
        cout<<"not anagram !!!"<<endl;
    }
    return 0;
}