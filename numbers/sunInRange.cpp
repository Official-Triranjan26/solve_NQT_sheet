// Find the sum of numbers in the given range

#include<bits/stdc++.h>
using namespace std;

void sumInRange(int low,int high){
    int sum=0;
    for(int i=low;i<=high;i++){
        sum=sum+i;
    }
    cout<<"sum of numbers in given range :"<<sum<<endl;
}

int main(){
    sumInRange(1,5);
    return 0;
}