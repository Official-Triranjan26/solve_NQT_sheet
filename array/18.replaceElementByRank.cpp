// Replace elements by its rank in the array

#include<bits/stdc++.h>
using namespace std;
int findIndex( vector<int >&myVector,int element){
    for(int i=0;i<myVector.size();i++){
        if(myVector[i]==element){
            myVector[i]= INT_MIN;
            return i;
        }
    }
}
void printVector(vector<int >myVector){

    for(int i=0;i<myVector.size();i++){
        cout<<myVector[i]<<" ";
    }
    cout<<endl;
}

void replaceElementByIndex(int arr[],int size){
    vector<int> myVector;
    for(int i=0;i<size;i++){
        myVector.push_back(arr[i]);
    }
    printVector(myVector);
    sort(myVector.begin(),myVector.end());
    printVector(myVector);
    
    for(int i=0;i<size;i++){
        cout<<findIndex(myVector,arr[i])+1<<" ";
    }
}

int main(){
    int arr[]={20, 15, 26, 2, 98, 6};
    int size=6;
    replaceElementByIndex(arr,size);
    return 0;
}