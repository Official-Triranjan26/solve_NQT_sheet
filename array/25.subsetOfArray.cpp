// Check if array is subset of another array
#include<bits/stdc++.h>
using namespace std;
// bool searchElementInArray(int arr[],int size,int start,int end,int searchElement){
//     int mid=(start+end)/2;
//     if(arr[mid]==searchElement){
//         return true;
//     }
//     else if(arr[mid]<searchElement){
//         searchElementInArray(arr,size,mid+1,end,searchElement);
//     }
//     else if(arr[mid]>searchElement){
//         searchElementInArray(arr,size,start,mid,searchElement);
//     }
// }

bool searchElementInArray (int arr[],int size,int searchElement){
    for(int i=0;i<size;i++){
        if(arr[i]==searchElement){
            return true;
        }
    }
    return false;
}

bool findIfSubset(int arr1[],int size1,int arr2[],int size2){
    if(size1>size2){
        cout<<"case1"<<endl;
        for(int i=0;i<size2;i++){
            if(!searchElementInArray(arr1,size1,arr2[i])){
                return false;
                exit(0);
            }
        }
        return true;
    }
    if(size2>size1){
        cout<<"case2"<<endl;
        for(int i=0;i<size1;i++){
            cout<<"case2"<<endl;
            if(!searchElementInArray(arr2,size2,arr1[i])){ 
                return false;
                exit(0);
            }
        }
        return true;
    }

}

int main(){
    int arr1[]= {1,3,4,5,2};
    int size1=5;
    int arr2[]= {4,5,2};
    int size2=3;
    if(findIfSubset(arr1,size1,arr2,size2)){
        if(size1>size2){
            cout<<"arr2[] is subset of arr1[]"<<endl;
        }
        else{
             cout<<"arr1[] is subset of arr2[]"<<endl;
        }
    }
    else{
        cout<<"no subset found !!"<<endl;
    }
    return 0;
}