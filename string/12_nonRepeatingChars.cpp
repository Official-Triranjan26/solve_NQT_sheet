// Find Non-repeating characters of a String

#include<bits/stdc++.h>
using namespace std;

void findNonRepeating(string str){
    map<char,int> mymap;
    for(int i=0;i<str.length();i++){
        mymap[str[i]]++;
    }
    map<char,int> ::iterator i=mymap.begin();
    while(i!=mymap.end()){
        if(i->second==1){
            cout<<i->first<<endl;
        }
        i++;
    }
}

int main(){
    string str="google";
    findNonRepeating(str);
    return 0;
}