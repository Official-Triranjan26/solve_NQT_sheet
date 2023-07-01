// Find the smallest number in an array

#include<bits/stdc++.h>
using namespace std;

int findMin(int arr[],int size){
    int minElement=arr[0];
    for(int i=0;i<size;i++){
        minElement=min(minElement,arr[i]);
    }
    return minElement;
}

int main(){
    int arr[5]={1,2,3,4,0};
    cout<<"min element in given array :"<<findMin(arr,5)<<endl;
}