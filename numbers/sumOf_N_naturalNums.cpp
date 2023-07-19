// Sum of first N Natural Numbers
#include<bits/stdc++.h>
using namespace std;

void sum(int num){
    int result=0;
    for(int i=0;i<=num;i++){
        result=result+i;
    }
    cout<<"sum of first "<< num<<" Natural Numbers : "<<result<<endl;
}

int main(){
    int sumTill=5;
    sum(sumTill);

    return 0;
}