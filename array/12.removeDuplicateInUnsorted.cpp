// Remove duplicates from unsorted array
#include<bits/stdc++.h>
using namespace std;
// void removeDuplicate(int arr[],int size){
//     map<int,int>myMap;
//     for(int i=0;i<size;i++){
//         if(myMap.find(arr[i])==myMap.end()){
//             myMap.insert(arr[i],0);
//         }
//         else{
//             myMap[arr[i]]++;
//         }
//     }
//     for (const auto& pair : myMap) {
//         cout << pair.first << ": " << pair.second << endl;
//     }

    // for(int i=0;i<size;i++){
    //     // myMap.find(arr[i])
    //     if(myMap.find(arr[i])==myMap.end()){
    //         myMap[arr[i]]++;
    //     }
    //     else{
            

    //     }
    // }
// }
int countElement(int arr[],int size,int element){
    int count=0;
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            count=count+1;
        }  
    }
    cout<<"coumt for element "<<element<<" "<<count<<endl;
    return count;
}
int main(){
    int arr[]={3,3,2,4,2,1,3,4,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    // removeDuplicate(arr,size);
    map<int,int>myMap;
    for(int i=0;i<size;i++){
        if(myMap.find(arr[i])==myMap.end()){
            myMap[arr[i]]=countElement(arr,size,arr[i]);
        }
        else{
            continue;
        }
    }
    for (const auto& pair : myMap) {
        cout << pair.first << ": " << pair.second << endl;
    }
    return 0;
}