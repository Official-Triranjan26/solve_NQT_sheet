// Leap Year or not
#include<bits/stdc++.h>
using namespace std;

bool isLeapyear(int year){
    if(year % 4==0){
        return true;
    }
    return false;
}

int main(){
    int year =2023;
    if(isLeapyear(year)){
        cout<<year<<" is a leapyear "<<endl;
    }
    else{
        cout<<year<<" is not a leapyear !!!"<<endl;
    }
    return 0;
}