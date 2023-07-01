// Rearrange array in increasing-decreasing order
#include<bits/stdc++.h>
using namespace std;
void assendingDesending(int arr[],int size){
    sort(arr,arr+size);
    cout<<"assending order : ";
    for (int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"desending order : ";
    for(int i=size-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={1,4,2,6,7,8,4,0};
    int size=8;
    assendingDesending(arr,size);
    return 0;
}