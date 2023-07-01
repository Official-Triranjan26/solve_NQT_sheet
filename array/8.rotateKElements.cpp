// Rotate array by K elements – Block Swap Algorithm
// Input: N = 5, array[] = {1,2,3,4,5} K=2
// Output: {3,4,5,1,2}

#include<bits/stdc++.h>
using namespace std;
void rotateByKElements(int* arr,int size,int k){
    for(int i=k;i<size;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<k;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    int k=2;
    rotateByKElements(arr,size,k);

    return 0;
}