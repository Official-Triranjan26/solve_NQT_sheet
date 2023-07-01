// Maximum product subarray in an array

#include<bits/stdc++.h>
using namespace std;

int maxProductSubArray(int arr[],int size){
    map<int,int>myMap;
    int maxProduct=1;

    for(int i=0;i<size-1;i++){
        int product=arr[i];
        for(int j=i+1;j<size;j++){
            cout<<"i= "<<arr[i]<<endl;
            cout<<"j= "<<arr[j]<<endl;
            if(arr[j]*product>product){
                product=product*arr[j];
            }
            cout<<"product : "<<product<<endl;
        }
        myMap[i]=product;
        product=1;
    }
    for (const auto& pair : myMap) {
        if(pair.second>maxProduct){
            maxProduct=pair.second;
        }
        cout<<pair.first<<" "<<pair.second<<endl;
    }
    return maxProduct;
}

int main(){
    int arr[]={1,2,3,4,5,0};
    int size=6;
    cout<<"maximum product subarray : "<<maxProductSubArray(arr,size);

    return 0;
}