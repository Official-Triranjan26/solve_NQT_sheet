// Print all the duplicates in the string

#include<bits/stdc++.h>
using namespace std;

void printAllDuplicates(string str){
    map<char,int> mymap;

    for(int i=0;i<str.length();i++){
        mymap[str[i]]++;
    }

    map<char,int> :: iterator i=mymap.begin();
    while(i!=mymap.end()){
        if(i->second>1){
            cout<<i->first<<"  "<<i->second<<endl;
        }
        i++;
    }
}

int main(){
    string str="sinstriiintng";
    printAllDuplicates(str);

    return 0;
}