// Count frequency of each element in an array
#include<bits/stdc++.h>
using namespace std;

int countOneElement(int arr[],int size,int element,bool visited[]){
    int count=0;
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            visited[i]=true;
            count+=1;
        }
    }
    return count;
}

void countAllElement(int arr[],int size,bool visited[]){
    int count;
    for(int i=0;i<size;i++){
        if(visited[i]==false){
            count=countOneElement(arr,size,arr[i],visited);
            cout<<"count of element "<<arr[i]<<" is : "<<count<<endl;
        }
    }
}


int main(){
    int size=8;
    bool visited[8]={false};
    int arr[8]={5,5,2,7,1,5,2,7};
    countAllElement(arr,size,visited);
    return 0;
}