// Reverse Words in a String

#include<bits/stdc++.h>
using namespace std;

vector<string> swapContent(vector<string> arr){
    int start=0;
    int end=arr.size()-1;

    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

    return arr;
}

string concatenate(vector<string > arr){
    string ans="";
    for(int i=0;i<arr.size();i++){
        ans.append(arr[i]);
        ans.push_back(' ');
    }
    return ans ;
}

string reverseWords(string str){
    string temp="";
    vector<string> arr;
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            arr.push_back(temp);
            temp="";
        }
        else{
            temp.push_back(str[i]);
        }
    }
    if(temp!=""){
        arr.push_back(temp);
        temp="";
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    vector<string> revArr=swapContent(arr);

    return concatenate(revArr);
}

int main(){
    string str="i am triranjan samanta from india";
    cout<<reverseWords(str);

    return 0;
}