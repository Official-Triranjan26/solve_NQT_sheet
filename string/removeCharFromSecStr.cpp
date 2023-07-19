// Remove Characters from first String present in the Second String

#include<bits/stdc++.h>
using namespace std;

bool findChar(char ch,string str){
    for(int i=0;i<str.length();i++){
        if(str[i]==ch){
            return true;
        }
    }
    return false;
}

string removeDuplicates(string str1,string str2){
    for(int i=0;i<str1.length();i++){
        if(findChar(str1[i],str2)){
            str1=str1.substr(0,i)+str1.substr(i+1);
            i--;
        }
    }

    return str1;
}

int main(){
    string str1="abcdef";
    string str2="cefz";

    cout<<"after removing all the elements of str2 form str1 : "<<endl;
    cout<<removeDuplicates(str1,str2);

    return 0;
}