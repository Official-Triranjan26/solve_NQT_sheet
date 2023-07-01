// Finding Equilibrium index in an array

#include<bits/stdc++.h>
using namespace std;
int sumInRange(int arr[],int start,int end){
    int sum =0;

    for(int i=start;i<end;i++){
        sum=sum+arr[i];
    }
    return sum;
}

int findEquilibrium(int arr[],int size){
    for(int i=0;i<size;i++){
        if(sumInRange(arr,0,i)==sumInRange(arr,i+1,size)){
            return i;
        }
    }
}

int main(){
    int arr[]={1,-1,4};
    int size=3;
    cout<<"equilibrium index : "<<findEquilibrium(arr,size);

    return 0;
}