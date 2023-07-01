// Find all Symmetric Pairs in the array of pairs

#include<bits/stdc++.h>
using namespace std;

void findSymmetricPair(int arr[][2],int numOfPairs){
    map<int,int>myMap;

    for(int i=0;i<numOfPairs;i++){
        cout<<"i : "<<i<<endl;        
        int first=arr[i][0];
        int second=arr[i][1];
        if(myMap.find(second)!=myMap.end() && myMap[second]==first){
            cout<<"("<<first<<","<<second<<")"<<endl;
        }
        else{
            cout<<"hello"<<endl;
            myMap[first]=second;
        }
        cout<<"-------------------"<<endl;
    }
    for (const auto& pair : myMap) {
            cout<<pair.first<<" "<<pair.second<<endl;
    }
}

int main(){
    int n = 5;
	int arr[5][2] = {{1, 2}, {2, 1}, {3, 4}, {4, 5}, {5, 4}};
    findSymmetricPair(arr,n);
    return 0;
}