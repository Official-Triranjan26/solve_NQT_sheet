// Find the median of the given array
#include<bits/stdc++.h>
using namespace std;
float getMedian(int arr[],int size){
    if(size%2!=0){
        return arr[int(size/2)];
    }
    else{
        int index1=(size-1)/2;
        int index2=(size/2);
        return float(arr[index1]+arr[index2])/2;
    }
}

int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    cout<<"median of the array : "<<getMedian(arr,size);

    return 0;
}