// Average of all elements in an array
#include<bits/stdc++.h>
using namespace std;

int calAvg(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum/size;
}

int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    cout<<"average of all elements : "<<calAvg(arr,size);

    return 0;
}