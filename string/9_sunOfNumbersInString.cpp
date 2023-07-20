// Sum of the Numbers in a String

#include<bits/stdc++.h>
using namespace std;

void sumOfNums(string str){
    int sum=0;
    string temp="";
    for(int i=0;i<str.length();i++){
        if(int(str[i])>=48  &&  int(str[i])<58){
            temp.push_back(str[i]);
        }
        else{
            temp.push_back(' ');
        }
    }

    string ans="";
    for(int i=0;i<temp.length();i++){
        if(temp[i]!=' '){
            cout<<"if| sum ="<<sum<<endl;
            ans.push_back(temp[i]);
        }
        else{

            cout<<"else| sum ="<<sum<<endl;
            if(ans!=""){
                sum=sum+stoi(ans);
            }
            ans="";
        }
    }
    if(ans!=""){
        sum=sum+stoi(ans);
    }

    cout<<sum<<endl;
}

int main(){
    string str="3xyz1w2k4";
    sumOfNums(str);

    return 0;
}