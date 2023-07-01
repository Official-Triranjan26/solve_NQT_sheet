// Calculate sum of the elements of the array
#include<bits/stdc++.h>
using namespace std;
int calSum(int arr[],int size){
    int sum=0;
    for (int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    return sum;
}

int main(){
    int arr[]{1,2,3,4,5};
    int size=5;
    cout<<"Sum of all elements of the given array is : "<<calSum(arr,size);

    return 0;
}