// Factorial of a number
#include<bits/stdc++.h>
using namespace std;

void getFactorial(int num){
    int ans=1;

    for(int i=1;i<=num;i++){
        ans=ans*i;
    }
    cout<<num<<" ! = "<<ans<<endl;
}

int main(){
getFactorial(3);

    return 0;
}