// Maximum and Minimum digit in a number

#include<bits/stdc++.h>
using namespace std;
 
void getMaxMin(int num){
    int maximum=INT_MIN;
    int minimum=INT_MAX;
    // int count=1;
    while(num!=0){
        // cout<<count++<<endl;
        int digit=num % 10;
        maximum=max(maximum,digit);
        minimum=min(minimum,digit);
        num=num/10;
    }

    cout<<"maximum digit : "<<maximum<<endl;
    cout<<"minimum digit : "<<minimum<<endl;

}

int main(){
    int num =1230011;
    getMaxMin(num);

    return 0;
}