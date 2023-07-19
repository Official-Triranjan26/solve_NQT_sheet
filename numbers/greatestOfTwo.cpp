// Greatest of two numbers
#include<bits/stdc++.h>
using namespace std;
int getMax(int a,int b){
    return max(a,b);
}
int main(){
    int a=1,b=-2;
    cout<<"maximum number between this two is : "<<getMax(a,b)<<endl;
    return 0;
}