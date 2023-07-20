// Calculate Frequency of characters in a String

#include<bits/stdc++.h>
using namespace std;

void frequency(string str){
    map<char,int> mymap;
    for(int i=0;i<str.length();i++){
        mymap[str[i]]++;
    }
    
    //  print map
    map<char,int> :: iterator i=mymap.begin();
    while(i!=mymap.end()){
        cout<<i->first<<" "<<i->second<<endl;
        i++;
    }

}

int main(){
    string str="takeuforward";
    frequency(str);

    return 0;
}