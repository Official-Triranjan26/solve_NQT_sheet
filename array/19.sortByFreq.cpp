// Replace elements by its rank in the array

#include<bits/stdc++.h>
using namespace std;
bool sortVector(pair<int,int>a , pair<int,int>b){
        return a.second>b.second;

}

void printVector(vector<pair<int,int>>myVector){

    for(int i=0;i<myVector.size();i++){
        cout<<myVector[i].first<<" , "<<myVector[i].second<<" "<<endl;
    }
    cout<<endl;
}

void printElement(int element,int times){
    for(int i=0;i<times;i++){
        cout<<element<<" ";
    }
}

void sortByFrequency(int arr[],int size){
    map<int ,int>myMap;
    for(int i=0;i<size;i++){
        myMap[arr[i]]++;
    }

    vector<pair<int,int>> myVector(myMap.begin(), myMap.end());
    printVector(myVector);
    sort(myVector.begin(),myVector.end(),sortVector);
    printVector(myVector);

    for(int i=0;i<myVector.size();i++){
        printElement(myVector[i].first,myVector[i].second);
    }

}

int main(){
    int arr[]={-199,6,7,-199,3,5};
    int size=6;
    sortByFrequency(arr,size);

    return 0;
}
