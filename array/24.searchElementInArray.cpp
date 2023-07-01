// Search an Element in an Array

#include<bits/stdc++.h>
using namespace std;

int searchElementInArray(int arr[],int size,int start,int end,int searchElement){
    int mid=(start+end)/2;
    if(arr[mid]==searchElement){
        return mid;
    }
    else if(arr[mid]<searchElement){
        searchElementInArray(arr,size,mid+1,end,searchElement);
    }
    else if(arr[mid]>searchElement){
        searchElementInArray(arr,size,start,mid,searchElement);
    }
}

int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    cout<<"searchelement found on index : "<<searchElementInArray(arr,size,0,5,3);
    return 0;
}