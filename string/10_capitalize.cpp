// Capitalize first and last character of each word of a string

#include<bits/stdc++.h>
using namespace std;

string capitalize(string str){
    int i=0;
    str[i]=toupper(str[i]);
    for( i=1;i<str.length()-1;i++){
        if(str[i-1]==' ' || str[i+1]==' '){
            str[i]=toupper(str[i]);
        }
    }
    str[i]=toupper(str[i]);
    return str;
}

int main(){
    string str="take u forward is awesome";
    cout<<str<<endl;
    cout<<capitalize(str);

    return 0;
}