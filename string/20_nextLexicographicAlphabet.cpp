// Change every letter with next lexicographic alphabet

#include<bits/stdc++.h>
using namespace std;

string changeLetter(string str){
    string result="";
    for(int i=0;i<str.length();i++){
        cout<<i<<"  ";
        if(int(str[i])==122){
            result.push_back(char(97));
            cout<<result<<endl;
        }
        else if(int(str[i])==90){
            result.push_back(char(65));
            cout<<result<<endl;
        }
        else{
            result.push_back(char(int(str[i])+1));
            cout<<result<<endl;
        }
    }
    // cout<<result<<endl;
    return result;
}

int main(){

    string str="abcyz";
    cout<<endl;
    cout<<"after change : "<<changeLetter(str);
    return 0;
}