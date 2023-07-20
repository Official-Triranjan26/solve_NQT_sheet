// Remove All Duplicates from a String

#include<bits/stdc++.h>
using namespace std;

string removeDuplicate(string str){
    map<char,bool> visited;

    for(int i=0;i<str.length();i++){
        cout<<i<<endl;
        if(visited[str[i]]==true){
            str=str.substr(0,i)+ str.substr(i+1);
            i--;
        }
        else{
            visited[str[i]]=true;
        }
    }
    return str;
}

int main(){
    string str="aaab";
    cout<<removeDuplicate(str);

    return 0;
}