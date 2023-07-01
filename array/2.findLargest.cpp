// Find the largest number in an array

#include<bits/stdc++.h>
using namespace std;

int findMax(int arr[],int size){
    int maxElement=arr[0];
    for(int i=0;i<size;i++){
        maxElement=max(maxElement,arr[i]);
    }
    return maxElement;
}

int main(){
    int arr[5]={10,2,3,4,0};
    cout<<"min element in given array :"<<findMax(arr,5)<<endl;
}