// Return maximum occurring character in the input string

#include<bits/stdc++.h>
using namespace std;

char maxOccuringChar(string str){
    map<char,int> mymap;

    for(int i=0;i<str.length();i++){
        mymap[str[i]]++;
    }
    
    int max=INT_MIN;
    map<char,int> :: iterator i=mymap.begin();
    while(i!=mymap.end()){
        if(i->second>max){
            max=i->second;
        }
        i++;
    }
    i=mymap.begin();
    while(i!=mymap.end()){
        if(i->second==max){
            return i->first;
        }
    }
}

int main(){

    string str="takeuforward";
    cout<<maxOccuringChar(str)<<endl;

    return 0;
}