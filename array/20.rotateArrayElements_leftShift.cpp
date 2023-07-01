// Rotate array by K elements
// Input: N = 7, array[] = {1,2,3,4,5,6,7} , k=2 , right
// Output: 6 7 1 2 3 4 5

#include<bits/stdc++.h>
using namespace std;

void rotation_leftShift(int arr[],int size,int pos){
    for(int i=size-pos;i<size;i++){
        cout<<arr[i]<<' ';
    }
    for(int i=0;i<size-pos;i++){
        cout<<arr[i]<<' ';
    }
}

int main(){
    int arr[]={3,7,8,9,10,11};
    int size=6;
    rotation_leftShift(arr,size,3);

    return 0;
}