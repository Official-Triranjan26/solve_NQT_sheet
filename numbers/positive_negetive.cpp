// Check whether a number is positive or negative
#include<bits/stdc++.h>
using namespace std;

void positiveOrNegetive(int num){
    if(num>0){
        cout<<num<<" is positive"<<endl;
    }
    else if(num==0){
        cout<<"not positive nor negetive"<<endl;
    }
    else{
        cout<<num<<" is negetive"<<endl;
    }
}

int main(){
    int num=0;
    positiveOrNegetive(num);

    return 0;
}