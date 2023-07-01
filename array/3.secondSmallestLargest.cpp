// Second Smallest and Second Largest element in an array

#include<bits/stdc++.h>
using namespace std;

int secondLargest(int arr[],int size){
    int largest=arr[0];
    int secLargest=0;
    

    for (int i=0;i<size;i++){
        if(arr[i]>largest){
            secLargest=largest;
            largest=arr[i];
        }
    }

    return secLargest;
}

int secondSmallest(int arr[],int size){
    int smallest=arr[0];
    int secSmallest=0;
    for(int i=0;i<size;i++){
        if(arr[i]<smallest){
            secSmallest=smallest;
            smallest=arr[i];
        }
    }
    return secSmallest;
}

int main(){
    int arr[5]={5,4,3,2,1};
    cout<<"second largest value :"<<secondLargest(arr,5)<<endl;
    cout<<"second smallest value : "<<secondSmallest(arr,5)<<endl;
    return 0;
}