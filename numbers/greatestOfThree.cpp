// Greatest of three numbers

#include<bits/stdc++.h>
using namespace std;

int getMax(int a,int b,int c){
    int temp=max(a,b);
    return max(temp,c);
}

int main(){
    int a=1,b=3,c=2;
    cout<<"maximum between three is : "<<getMax(a,b,c)<<endl;
    return 0;
}