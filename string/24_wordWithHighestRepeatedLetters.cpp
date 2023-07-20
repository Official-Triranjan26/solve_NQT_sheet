// Write a program to find a word in a given string which has the highest number of repeated letters

#include<bits/stdc++.h>
using namespace std;

int getNumOfRepetedLetters(string str){
    map<char,int> mymap;
    int count=0;
    for(int i=0;i<str.length();i++){
        mymap[str[i]]++;
    }
    map<char,int> :: iterator i=mymap.begin();

    while(i!=mymap.end()){
        if(i->first>1){
            count=count+(i->second-1);
        }
        i++;
    }

    return count;
}

string stringWithMaxRepChars(map<string,int> mymap,int max){
    map<string,int> :: iterator i=mymap.begin();

    while(i!=mymap.end()){
        if(i->second==max){
            cout<<i->first<<endl;
            return i->first;
        }
        i++;
    }
}

string getWord(string str){
    int max=INT_MIN;
    string temp="";
    map<string,int> mymap;
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            int numOfRep=getNumOfRepetedLetters(temp);
            mymap[temp]=numOfRep;
            if(numOfRep>max){
                max=numOfRep;
            }
            temp="";
        }
        else{
            temp.push_back(str[i]);
        }

    }
    if(temp!=""){
        int numOfRep=getNumOfRepetedLetters(temp);
        mymap[temp]=numOfRep;
        if(numOfRep>max){
            max=numOfRep;
        }
        temp="";
    }

    string ans=stringWithMaxRepChars(mymap,max);

    // map<string,int> :: iterator i=mymap.begin();

    // while(i!=mymap.end()){
        
    //     cout<<i->first<<"  "<<i->second<<endl;
    //     i++;
    // }

    return ans;
}

int main(){
    string str="abc google microsoft";
    cout<<getWord(str)<<endl;
    return 0;
}