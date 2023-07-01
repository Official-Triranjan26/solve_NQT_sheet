// Adding Element in an Array
// insertAtPosition(arr,size,3,9);
// inp-1 2 3 4 5 
// out-1 2 3 9 4 5 
#include<bits/stdc++.h>
using namespace std;

void insertAtPosition(int arr[],int& size,int pos,int element){
    if (size!=pos){
        for(int i=size;i>=pos;i--){
            arr[i+1]=arr[i];
        }
    }
    arr[pos]=element;
}

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    printArray(arr,size);
    insertAtPosition(arr,size,3,10);
    printArray(arr,size+1);
    return 0;
}