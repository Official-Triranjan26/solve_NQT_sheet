// Find all repeating elements in an array
#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void findRepeated(int arr[],int size){
    map<int ,int> myMap;
    for (int  i = 0; i < size; i++){
        myMap[arr[i]]++;
    }
    // print map
    // for (auto i : myMap){
    //     cout << i.first << " \t\t\t " << i.second << endl;
    // }
    for (const auto& pair : myMap) {
        if(pair.second>1){
            cout<<pair.first<<" ";
        }
    }
    
}

int main(){
    int arr[]={1,2,2,3,4,5,5};
    int size=7;
    // printArray(arr,size);
    cout<<"repeated elements are ";
    findRepeated(arr,size);
    return 0;
}