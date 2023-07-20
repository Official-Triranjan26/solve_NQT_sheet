// Count number of vowels, consonants, spaces in String

#include<bits/stdc++.h>
using namespace std;

void count(string str){
    int vCount=0;
    int cCount=0;
    int sCount=0;
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            sCount++;
        }
        else if(
            tolower(str[i])=='a' ||
            tolower(str[i])=='e' ||
            tolower(str[i])=='i' ||
            tolower(str[i])=='o' ||
            tolower(str[i])=='u'
        ){
            vCount++;
        }

        else{
            cCount++;
        }
    }
    cout<<"vowels : "<<vCount<<endl;
    cout<<"consonants : "<<cCount<<endl;
    cout<<"spaces : "<<sCount<<endl;
}

int main(){
    string str="India won the cricket match";
    count(str);
    return 0;
}