// Find Sum of AP Series
// a = first term of A.P.

// d= common Difference of A.P.

// n= Number of Terms in  A.P.

#include<bits/stdc++.h>
using namespace std;

int sumOfAp(int a,int d,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+(a+d*i);
        cout<<i<<" : "<<sum<<endl;
    }
    return sum;
}

int main(){
    int a=-2,d=5,n=8;
    cout<<"sum of AP : "<<sumOfAp(a,d,n);
    return 0;
}