// Print Fibonacci Series up to Nth term
#include<bits/stdc++.h>
using namespace std;

void series(int num){
    int first=0;
    int second=1;

    cout<<first<<" "<<second<<" ";

    for(int i=0;i<num-1;i++){
        int temp=first;
        cout<<first+second<<" ";
        first=second;
        second=temp+first;

    }
}

int main(){
    series(5);

    return 0;
}