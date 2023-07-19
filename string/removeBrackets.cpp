// Remove brackets from an algebraic expression

#include<bits/stdc++.h>
using namespace std;

// string removeBrackets(string str){
//     for(int i=0;i<str.length();i++){
//         if(
//             int(str[i])==40 ||
//             int(str[i])==41 ||
//             int(str[i])==123 ||
//             int(str[i])==125 ||
//             int(str[i])==91 ||
//             int(str[i])==93
//         ){
//             str=str.substr(0,i)+str.substr(i+1);
//             i=i-1;
//         }

//         else{
//             continue;
//         }
//     }
//     return str;
// }

string removeBrackets(string str){
    string result="";
    for(int i=0;i<str.length();i++){
        if(
            int(str[i])==40 ||
            int(str[i])==41 ||
            int(str[i])==123 ||
            int(str[i])==125 ||
            int(str[i])==91 ||
            int(str[i])==93
        ){
            continue;
        }

        else{
            result.push_back(str[i]);
        }
    }
    return result;
}

int main(){
    string str="(((a-b))+c)";
    cout<<str<<endl;
    cout<<removeBrackets(str)<<endl;

    return 0;
}

// 40 41 123 125 91 93