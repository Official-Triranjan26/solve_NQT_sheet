#include<bits/stdc++.h>
using namespace std;
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int* reverseArray(int *arr,int size){
    for(int i=0;i<size/2;i++){
        swap(arr[i],arr[size-1-i]);
    }
    return arr;
}

int main(){
    int size;
    cout<<"Enter the number of array elements : "<<endl;
    cin>>size;
    int * arr=new int(5);
    for (int i=0;i<size;i++){
        cout<<"element "<<i<<" : ";
        cin>>arr[i];
    }
    cout<<"entered array "<<endl;
    for (int i=0;i<size;i++){
        cout<<arr[i];
    }
    cout<<endl;
    reverseArray(arr,size);
    cout<<"reversed array : "<<endl;
    for (int i=0;i<size;i++){
        cout<<arr[i];
    }

    return 0;
}