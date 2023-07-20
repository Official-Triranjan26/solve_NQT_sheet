// Remove Spaces from a String

#include<bits/stdc++.h>
using namespace std;

void removeSpaces(string str){
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            str=str.substr(0,i)+str.substr(i+1);
        }
    }

    cout<<"str after removing spaces :"<<endl<<str<<endl;
}

int main(){
    string str="I am very happy today";
    removeSpaces(str);
    return 0;
}