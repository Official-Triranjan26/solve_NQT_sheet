// Power of a number

#include<bits/stdc++.h>
using namespace std;

void getPower(int num,int power){
    cout<<num<<"^"<<power<<" : "<<pow(float(num),float(power))<<endl;
}

int main(){
    int num=3;
    int power=3;
    getPower(num,power);
    return 0;
}