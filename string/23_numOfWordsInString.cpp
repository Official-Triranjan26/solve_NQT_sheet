// Count the number of words in a given string

#include<bits/stdc++.h>
using namespace std;

int numOfWords(string str){
    int count=0;
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            count++;
        }
    }
    return count+1;
}

int main(){

    string str="my name is triranjan samanta form anandanagar";
    cout<<"no. of words in the given string is: "<<numOfWords(str)<<endl;


    return 0;
}